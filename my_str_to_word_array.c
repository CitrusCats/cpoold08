#include <stdlib.h>
#include <stdio.h>

#include "my.h" // Cutie Natalie <3

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab != NULL && tab[i] != NULL; ++i) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}

char *my_strndup(char const *src, int n)
{
    char *str = (char *)malloc(n + 1);

    if (str == NULL)
        return str;
    my_strncpy(str, src, n);
    return str;
}

char **my_str_to_word_array(char const *str)
{
    char **array;
    int wordcount = 1;
    int start = 0;

    for (int i = 0; str != NULL && *str != '\0' && str[i] != '\0'; ++i)
        if (str[i] < '0' || str[i] > '9' && str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
            ++wordcount;
    array = (char **)malloc(sizeof(char *) * (wordcount + 1));
    if (array == NULL)
        return array;
    for (int i = 0; i < wordcount; ++i)
        array[i] = NULL;
    for (int i = 0, a = 0; str != NULL && *str != '\0' && str[i] != '\0'; ++i) {
        if (str[i + 1] < '0' || str[i + 1] > '9' && str[i + 1] < 'A' || str[i + 1] > 'Z' && str[i + 1] < 'a' || str[i + 1] > 'z') {
            array[a] = my_strndup(&str[start], (i + 1) - start);
            ++a;
            start = i + 2;
        }
    }
    array[wordcount] = NULL;
    return array;
}
