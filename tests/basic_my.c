/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <project.h>

Test(basic_my, convert_base_to_ten_test)
{
	cr_expect(convert_base_to_ten("1010", 2) == 10);
	cr_expect(convert_base_to_ten("1010", 3) == 30);
	cr_expect(convert_base_to_ten("1010", 4) == 68);
	cr_expect(convert_base_to_ten("1010", 5) == 130);
	cr_expect(convert_base_to_ten("1010", 6) == 222);
	cr_expect(convert_base_to_ten("1010", 7) == 350);
	cr_expect(convert_base_to_ten("1010", 8) == 520);
	cr_expect(convert_base_to_ten("1010", 9) == 738);
	cr_expect(convert_base_to_ten("1010", 10) == 1010);
	cr_expect(convert_base_to_ten("1010", 11) == 1342);
	cr_expect(convert_base_to_ten("1010", 12) == 1740);
	cr_expect(convert_base_to_ten("1010", 13) == 2210);
	cr_expect(convert_base_to_ten("1010", 14) == 2758);
	cr_expect(convert_base_to_ten("1010", 15) == 3390);
	cr_expect(convert_base_to_ten("1010", 16) == 4112);
}

Test(basic_my, convert_base_test_one)
{
	cr_expect_str_eq(convert_base(1010, 2, 1), "1111110010");
	cr_expect_str_eq(convert_base(1010, 3, 1), "1101102");
	cr_expect_str_eq(convert_base(1010, 4, 1), "33302");
	cr_expect_str_eq(convert_base(1010, 5, 1), "13020");
	cr_expect_str_eq(convert_base(1010, 6, 1), "4402");
	cr_expect_str_eq(convert_base(1010, 7, 1), "2642");
	cr_expect_str_eq(convert_base(1010, 8, 1), "1762");
	cr_expect_str_eq(convert_base(1010, 9, 1), "1342");
	cr_expect_str_eq(convert_base(1010, 10, 1), "1010");
	cr_expect_str_eq(convert_base(1010, 11, 1), "839");
	cr_expect_str_eq(convert_base(1010, 12, 1), "702");
	cr_expect_str_eq(convert_base(1010, 13, 1), "5C9");
	cr_expect_str_eq(convert_base(1010, 14, 1), "522");
	cr_expect_str_eq(convert_base(1010, 15, 1), "475");
	cr_expect_str_eq(convert_base(1010, 16, 1), "3F2");
	cr_expect_str_eq(convert_base(1010, 17, 1), "387");
	cr_expect_str_eq(convert_base(1010, 18, 1), "322");
	cr_expect_str_eq(convert_base(1010, 19, 1), "2F3");
	cr_expect_str_eq(convert_base(1010, 20, 1), "2AA");
	cr_expect_str_eq(convert_base(1010, 21, 1), "262");
}

Test(basic_my, convert_base_test_two)
{
	cr_expect_str_eq(convert_base(1010, 22, 1), "21K");
	cr_expect_str_eq(convert_base(1010, 23, 1), "1KL");
	cr_expect_str_eq(convert_base(1010, 24, 1), "1I2");
	cr_expect_str_eq(convert_base(1010, 25, 1), "1FA");
	cr_expect_str_eq(convert_base(1010, 26, 1), "1CM");
	cr_expect_str_eq(convert_base(1010, 27, 1), "1AB");
	cr_expect_str_eq(convert_base(1010, 28, 1), "182");
	cr_expect_str_eq(convert_base(1010, 29, 1), "15O");
	cr_expect_str_eq(convert_base(1010, 30, 1), "13K");
	cr_expect_str_eq(convert_base(1010, 31, 1), "11I");
	cr_expect_str_eq(convert_base(1010, 32, 1), "VI");
	cr_expect_str_eq(convert_base(1010, 33, 1), "UK");
	cr_expect_str_eq(convert_base(1010, 34, 1), "TO");
	cr_expect_str_eq(convert_base(1010, 35, 1), "SU");
	cr_expect_str_eq(convert_base(1010, 36, 1), "S2");
}

Test(basic_my, my_strrev_strcat_power_test)
{
	cr_expect_str_eq(my_strrev(strdup("BASIC")), "CISAB");
	cr_expect_str_eq(my_strrev(strdup("Hello World!")), "!dlroW olleH");
	cr_expect_str_eq(my_strcat(strdup("Hello "), "World!"), "Hello World!");
	cr_expect_str_eq(my_strcat(strdup("BA"), "SIC"), "BASIC");
	cr_expect_str_eq(my_strrev(strdup("BOB")), "BOB");
	cr_expect(power(5, 6) == 15625);
	cr_expect(power(9, 8) == 43046721);
}
