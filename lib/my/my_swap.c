#include <stddef.h>

#include "my.h"

void my_swap(int *a, int *b)
{
    int s = 0;

    if (a == NULL || b == NULL)
        return;
    s = *a;
    *a = *b;
    *b = s;
}
