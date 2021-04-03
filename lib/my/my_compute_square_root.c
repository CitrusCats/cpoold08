#include <limits.h>

#include "my.h"

int my_compute_square_root(int nb)
{
    long long result = 0;
    long long start = 0;
    long long end = nb;
    long long mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid == nb) {
            result = mid;
            break;
        }
        if (mid * mid < nb)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return (result < INT_MIN || result > INT_MAX) ? 0 : result;
}
