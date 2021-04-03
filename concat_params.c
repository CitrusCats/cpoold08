#include <stdlib.h>

#include "my.h"

char *concat_params(int argc, char **argv)
{
    char *result;
    int length = 0;
    int j = 0;

    for (int i = 0; i < argc; ++i)
        length += my_strlen(argv[i]) + 1;
    result = (char *)malloc(length);
    if (result == NULL)
        return result;
    for (; j < argc; ++j) {
        result = my_strcat(result, argv[j]);
        result = my_strcat(result, "\n");
    }
    result[length - 1] = '\0';
    return result;
}
