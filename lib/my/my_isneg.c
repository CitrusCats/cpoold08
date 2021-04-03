#include "my.h"

int my_isneg(int n)
{
    if (n >= 0)
        my_putstr("P\n");
    else
        my_putstr("N\n");
    return 0;
}
