#include "my.h"

int count_digit(int nbr, int base)
{
    int count = 0;

    while (nbr != 0) {
        nbr /= base;
        ++count;
    }
    return count;
}