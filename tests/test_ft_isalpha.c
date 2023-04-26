#include "minunit/minunit.h"

int ft_isalpha(int c);

MU_TEST(is_alpha_should_return_true_when_alphabet_letter)
{
	char	tested_char = 'a';
	int		expected_result = 1; //true

	int actual_result;
	actual_result = ft_isalpha(tested_char);

	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(test_suite) 
{
	MU_RUN_TEST(is_alpha_should_return_true_when_alphabet_letter);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}
