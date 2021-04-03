#include <stddef.h>

#include "my.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str != NULL && str[i] != '\0'; ++i)
        if (str[i] < ' ' || str[i] > '~')
            return 0;
    return 1;
}
