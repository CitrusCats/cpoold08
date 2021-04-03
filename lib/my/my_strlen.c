#include <stddef.h>

#include "my.h"

int my_strlen(const char *str)
{
    int count = 0;

    for (; str != NULL && *str != '\0'; ++str, ++count);
    return count;
}
