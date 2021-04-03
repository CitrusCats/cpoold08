#include <stddef.h>

#include "my.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str != NULL && str[i] != '\0'; ++i)
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
    return 1;
}
