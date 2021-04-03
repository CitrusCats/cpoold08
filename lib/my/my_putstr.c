#include <stddef.h>

#include "my.h"

int my_putstr(const char *str)
{
    for (; str != NULL && *str != '\0'; ++str)
        my_putchar(*str);
}
