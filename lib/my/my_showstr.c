#include <stddef.h>

#include "my.h"

int my_showstr(char const *str)
{
    for (; str != NULL && *str != '\0'; ++str) {
        if (*str >= ' ' && *str <= '~')
            my_putchar(*str);
        else {
            my_putchar('\\');
            if (*str < 16)
                my_putchar('0');
            my_putnbr_base(*str, "0123456789abcdef");
        }
    }
    return 0;
}

// <3
