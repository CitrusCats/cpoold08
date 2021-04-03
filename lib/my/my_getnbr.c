#include <limits.h>
#include <stddef.h>

#include "my.h"

int my_getnbr(const char *str)
{
    long long number = 0;
    int negative = 1;

    for (; str != NULL && (*str == '-' || *str == '+'); ++str)
        negative *= (*str == '-') ? -1 : 1;
    for (; str != NULL && *str != '\0' && *str >= '0' && *str <= '9'; ++str) {
        number *= 10;
        number += *str - '0';
    }
    return (number < INT_MIN || number > INT_MAX) ? 0 : (number * negative);
}
