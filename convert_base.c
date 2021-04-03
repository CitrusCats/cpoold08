#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "my.h"

static void my_writenbr_base(int nbr, int digit, char *str, char const *base)
{
    int length = my_strlen(base);

    if (nbr < 0) {
        str[0] = '-';
        nbr *= -1;
        str += 1;
    }
    for (int i = digit - 1; nbr != 0; --i) {
        str[i] = base[nbr % length];
        nbr /= length;
    }
    str[digit] = '\0';
}

char *convert_base(char const *nbr, char const *base_from, char const *base_to)
{
    int num = my_getnbr_base(nbr, base_from);
    int digit = count_digit(num, length);
    char *str = malloc(sizeof(char) * (digit + (num < 0 ? 2 : 1)));

    if (str == NULL)
        return NULL;
    my_writenbr_base(num, digit, str, base_to);
    return str;
}
