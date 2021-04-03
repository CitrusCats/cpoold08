#include "my.h"

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int start = 2; start < nb; ++start)
        if ((nb % start) == 0)
            return 0;
    return 1;
}
