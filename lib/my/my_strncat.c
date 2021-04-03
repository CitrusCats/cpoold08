#include "my.h"

char *my_strncat(char *dest, const char *src, int nb)
{
    int length = my_strlen(dest);
    int i = 0;

    for (; src && dest && src[i] != '\0' && i < nb; ++i)
        dest[length + i] = src[i];
    if (dest)
        dest[length + i] = '\0';
    return dest;
}
