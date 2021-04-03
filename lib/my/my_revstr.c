#include "my.h"

char *my_revstr(char *str)
{
    int length = my_strlen(str);
    char s;

    for (int i = 0; i < length / 2; ++i) {
        s = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = s;
    }
    return str;
}
