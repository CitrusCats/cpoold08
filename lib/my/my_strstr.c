#include <stddef.h>

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int count = 0;

    for (int i = 0; str != NULL && str[i] != '\0'; ++i) {
        count = 0;
        for (int j = 0; to_find != NULL && to_find[j] != '\0'; ++j)
            if (str[j + i] == to_find[j])
                ++count;
        if (count == my_strlen(to_find))
            return str + i;
    }
    return NULL;
}
