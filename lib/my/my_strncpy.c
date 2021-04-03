#include <stddef.h>

#include "my.h"

char *my_strncpy(char *dest, const char *src, int n)
{
    for (int i = 0; src != NULL && dest != NULL && src[i] != '\0' && i < n; ++i)
        dest[i] = src[i];
    return dest;
}
