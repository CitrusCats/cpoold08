#include <limits.h>

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    long long result = nb;

    if (p <= 0)
        return (p == 0) ? 1 : 0;
    return (result < INT_MIN || result > INT_MAX) ? 0 : (result * my_compute_power_rec(nb, p - 1));
}
