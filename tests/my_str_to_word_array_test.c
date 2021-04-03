#include <criterion/criterion.h>

char **my_str_to_word_array(char const *str);

Test(my_str_to_word_array, my_str_to_word_array_test)
{
    char const *test = "William\tis\tthe\tbest";

    my_str_to_word_array(test);
}

Test(my_str_to_word_array, my_str_to_word_array_test2)
{
    char const *test = "William\nis-the/best <3";

    my_str_to_word_array(test);
}

Test(my_str_to_word_array, my_str_to_word_array_test3)
{
    char const *test = "HEllo";

    my_str_to_word_array(test);
}

Test(my_str_to_word_array, my_str_to_word_array_test4)
{
    char const *test = "";

    my_str_to_word_array(test);
}

Test(my_str_to_word_array, my_str_to_word_array_test5)
{
    char const *test = "----------------";

    my_str_to_word_array(test);
}