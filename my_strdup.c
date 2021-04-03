#include <stdlib.h>

#include "my.h"

char *my_strdup(char const *src)
{
    char *str = (char *)malloc(my_strlen(src) + 1);

    if (str == NULL)
        return str;
    my_strcpy(str, src);
    return str;
}
