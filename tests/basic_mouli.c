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

Test(basic_mouli, basic_mouli_no_base_n_two, .init = redirect_all_stdout)
{
	info_t info = {4782, -1, 10, 0, 100};

	turnover(4782, info);
	cr_expect_stdout_eq_str("4782 leads to 46464 in 3 iteration(s) in base "
	"10\n");
}

Test(basic_mouli, basic_mouli_no_base_n_three, .init = redirect_all_stdout)
{
	info_t info = {193, -1, 10, 0, 100};

	turnover(193, info);
	cr_expect_stdout_eq_str("193 leads to 233332 in 8 iteration(s) in base "
	"10\n");
}

Test(basic_mouli, basic_mouli_n_base_two, .init = redirect_all_stdout)
{
	info_t info = {32, -1, 2, 0, 100};

	turnover(32, info);
	cr_expect_stdout_eq_str("32 leads to 33 in 1 iteration(s) in base 2\n");
}

Test(basic_mouli, basic_mouli_n_base_five, .init = redirect_all_stdout)
{
	info_t info = {17, -1, 5, 0, 100};

	turnover(17, info);
	cr_expect_stdout_eq_str("17 leads to 36 in 2 iteration(s) in base 5\n");
}
