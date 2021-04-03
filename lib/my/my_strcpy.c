#include <stddef.h>

#include "my.h"

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;

    for (; src != NULL && dest != NULL && src[i] != '\0'; ++i)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
