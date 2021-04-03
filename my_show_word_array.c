#include <stdlib.h>

#include "my.h"

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab != NULL && tab[i] != NULL; ++i) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
