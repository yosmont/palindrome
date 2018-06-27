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

Test(basic, basic_n, .init = redirect_all_stdout)
{
	info_t info = {4782, -1, 10, 0, 100};

	turnover(info.nb, info);
	cr_assert_stdout_eq_str("4782 leads to 46464 in 3 iteration(s) in "
	"base 10\n");
}

Test(basic, basic_n_base_two, .init = redirect_all_stdout)
{
	info_t info = {64, -1, 2, 0, 100};

	turnover(info.nb, info);
	cr_expect_stdout_eq_str("64 leads to 65 in 1 iteration(s) in base 2\n");
}

Test(basic, basic_p_min_six, .init = redirect_all_stdout)
{
	info_t info = {-1, 363, 10, 6, 100};

	palin(info);
	cr_expect_stdout_eq_str("3 leads to 363 in 6 iteration(s) "
	"in base 10\n");
}

Test(basic, basic_mouli_no_base_n, .init = redirect_all_stdout)
{
	info_t info = {4, -1, 10, 0, 100};

	turnover(4, info);
	cr_expect_stdout_eq_str("4 leads to 4 in 0 iteration(s) in base 10\n");
}
