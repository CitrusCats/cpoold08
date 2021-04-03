#include <limits.h>
#include <stdio.h>
#include <stdbool.h>

#include "my.h"

int find_first_in_base(char const *base, char c, int lengthb)
{
    for (int i = 0; i < lengthb; ++i)
        if (base[i] == c)
            return i;
    return -1;
}

int my_getnbr_base(char const *str, char const *base)
{
    int lengthb = my_strlen(base);
    int lengthstr = my_strlen(str);
    int result = 0;
    int nbr = 0;
    int np = 1;
    bool signerror = false;

    if (str == NULL || base == NULL)
        return 0;
    for (int i = 0; i < lengthstr; ++i) {
        if ((str[i] == '-' || str[i] == '+') && !signerror) {
            if (str[i] == '-')
                np *= -1;
            continue;
        }
        signerror = true;
        nbr = find_first_in_base(base, str[i], lengthb);
        if (nbr < 0)
            return 0;
        result += nbr * my_compute_power_rec(lengthb, lengthstr - i - 1);
    }
    return np * result;
}
