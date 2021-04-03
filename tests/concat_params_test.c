#include <criterion/criterion.h>

char *concat_params(int argc, char **argv);


Test(concat_params, concat_params_test)
{
    char const *array[] = {
        "William",
        "Natalie",
    };
    char const *result = "William\nNatalie";

    cr_assert_str_eq(concat_params(2, array), result);
}

// type variable_name = value;
// type variable_name_array[] = value;
// char *variable_name_array[] = value;