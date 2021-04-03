#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int length = my_strlen(dest);
    int i = 0;

    for (; src && dest && src[i] != '\0'; ++i)
        dest[length + i] = src[i];
    if (dest)
        dest[length + i] = '\0';
    return dest;
}
