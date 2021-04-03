#include <criterion/criterion.h>

char *my_strdup(char const *src);

Test(my_strdup, my_strdup_test)
{
    char src[] = "William";

    cr_assert_str_eq(src, my_strdup(src));
}
