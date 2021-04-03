#include <stddef.h>

#include "my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str != NULL && str[i] != '\0'; ++i)
        if (str[i] < 'A' || str[i] > 'Z')
            return 0;
    return 1;
}
