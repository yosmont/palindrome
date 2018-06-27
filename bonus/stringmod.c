/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** int to string
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "project.h"

char *my_strcat(char *dest, char *src)
{
	int len = strlen(dest);
	int tmp = 0;
	char *res = malloc(sizeof(char) * (len + strlen(src) + 1));

	for (int i = 0; i < len; i++)
		res[i] = dest[i];
	free(dest);
	while (src[tmp] != '\0') {
		res[len] = src[tmp];
		len++;
		tmp++;
	}
	res[len] = '\0';
	dest = strdup(res);
	free(res);
	return (dest);
}

char *my_strrev(char *str)
{
	char *point_one = str;
	char *point_two = str + strlen(str) - 1;

	for (; point_two > point_one; point_one++, point_two--) {
		*point_one ^= *point_two;
		*point_two ^= *point_one;
		*point_one ^= *point_two;
	}
	return (str);
}

void print_sol(int nb)
{
	char *res = strdup("\nThere is \0");
	char *tmp = convert_base(nb, 10, 0);

	res = my_strcat(my_strcat(res, tmp), " solutions!\n\0");
	write(1, res, strlen(res));
	free(tmp);
	free(res);
}

int convert_base_to_ten(char *str, int base)
{
	int res = 0;

	for (int i = 0; str[i]; i++)
		res = res * base + (str[i] - '0');
	return (res);
}

char *convert_base(unsigned int nb, int base, int maj)
{
	char *letter = (maj == 0) ?
		strdup("0123456789abcdefghijklmnopqrstuvwxyz\0") :
		strdup("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\0");
	unsigned int nbr = nb;
	int size = (nb == 0) ? 1 : 0;
	char *new = (nb == 0) ? strdup("0\0") : NULL;

	for (; nbr != 0; size++)
		nbr = nbr / base;
	new = (nb == 0) ? new : malloc(sizeof(char) * (size + 1));
	for (int i = 0; nb != 0; i++) {
		new[i] = letter[nb % base];
		nb = nb / base;
	}
	new[size] = '\0';
	my_strrev(new);
	free(letter);
	return (new);
}
