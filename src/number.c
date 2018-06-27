/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** number
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "project.h"

static void three_free_step(void *one, void *two, void *three)
{
	if (one)
		free(one);
	if (two)
		free(two);
	if (three)
		free(three);
}

static void print_successtr(int tested, int end, int iteration, int base)
{
	char *tmp = convert_base(tested, 10, 0);
	char *res = NULL;

	res = my_strcat(tmp, " leads to \0");
	tmp = convert_base(end, 10, 0);
	res = my_strcat(my_strcat(res, tmp), " in \0");
	free(tmp);
	tmp = convert_base(iteration, 10, 0);
	res = my_strcat(my_strcat(res, tmp), " iteration(s) in base \0");
	free(tmp);
	tmp = convert_base(base, 10, 0);
	res = my_strcat(my_strcat(res, tmp), "\n\0");
	free(tmp);
	write(1, res, strlen(res));
	free(res);
}

void turnover(int nb, info_t info)
{
	char *str = convert_base(nb, info.base, 0);
	char *str_two = my_strrev(strdup(str));
	int i = (nb == 0) ? info.imin : 0;

	for (; !(strcmp(str, str_two) == 0 && i >= info.imin) &&
	i < info.imax && nb > 0; i++) {
		nb = (convert_base_to_ten(str, info.base) +
		convert_base_to_ten(str_two, info.base));
		three_free_step(str, str_two, NULL);
		str = convert_base(nb, info.base, 0);
		str_two = my_strrev(strdup(str));
	}
	if (i < info.imin || strcmp(str, str_two) != 0)
		write(1, "no solution\n\0", 13);
	else
		print_successtr(info.nb, nb, i, info.base);
	three_free_step(str, str_two, NULL);
}

static int palin_turnover(int nb, info_t info)
{
	char *str = convert_base(nb, info.base, 0);
	char *str_two = my_strrev(strdup(str));
	char *palin_str = convert_base(info.pal, info.base, 0);
	int i = (nb == 0) ? info.imin : 0;
	int check = 0;

	for (; !(strcmp(str, palin_str) == 0 && i >= info.imin) &&
	i < info.imax && nb > 0; i++) {
		nb = (convert_base_to_ten(str, info.base) +
		convert_base_to_ten(str_two, info.base));
		three_free_step(str, str_two, NULL);
		str = convert_base(nb, info.base, 0);
		str_two = my_strrev(strdup(str));
	}
	if (i >= info.imin && strcmp(str, palin_str) == 0) {
		check = 1;
		print_successtr(info.nb, nb, i, info.base);
	}
	three_free_step(str, palin_str, str_two);
	return (check);
}

void palin(info_t info)
{
	char *str = convert_base(info.pal, info.base, 0);
	char *str_two = strdup(str);
	int check = 0;

	my_strrev(str_two);
	if (strcmp(str, str_two) != 0)
		check = 1;
	three_free_step(str, str_two, NULL);
	if (check == 1)
		exit_comment(2, "Error: pal argument isn't a palindrome\n", 84);
	for (int i = 0; i < info.pal; i++) {
		info.nb = i + 1;
		check += palin_turnover((i + 1), info);
	}
	info.nb = 0;
	if (info.pal == 0)
		check += palin_turnover(0, info);
	info.nb = -1;
	if (check == 0)
		write(1, "no solution\n\0", 13);
}
