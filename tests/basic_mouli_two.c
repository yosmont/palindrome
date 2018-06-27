/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <project.h>

static void redirect_all_stdout(void)
{
	cr_redirect_stdout();
	cr_redirect_stderr();
}

Test(basic_mouli, basic_mouli_n_base_five_two, .init = redirect_all_stdout)
{
	info_t info = {5616, -1, 5, 0, 100};

	turnover(5616, info);
	cr_expect_stdout_eq_str("5616 leads to 5616 in 0 iteration(s) in base "
	"5\n");
}

Test(basic_mouli, basic_mouli_n_base_two_two, .init = redirect_all_stdout)
{
	info_t info = {123, -1, 2, 0, 100};

	turnover(123, info);
	cr_expect_stdout_eq_str("123 leads to 975 in 4 iteration(s) in base "
	"2\n");
}
