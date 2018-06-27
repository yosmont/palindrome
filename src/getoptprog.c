/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** getopt of this programme
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "project.h"

void exit_comment(int fd, char *str, int rtn)
{
	write(fd, str, strlen(str));
	exit(rtn);
}

static int my_atoi(char *str)
{
	int nb = 0;

	if (str == NULL || str[0] == '\0')
		exit_comment(2, "Error: void string\n\0", 84);
	for (size_t i = 0; str[i] != '\0'; i++) {
		if (isdigit(str[i]) == 0)
			exit_comment(2, "Error: bad option\n\0", 84);
		nb = (nb * 10) + (str[i] - '0');
	}
	return (nb);
}

static int simpleflag(int nb_flag, info_t *info, char *arg)
{
	switch (nb_flag) {
	case 0:
		info->nb = my_atoi(arg);
		break;
	case 1:
		info->pal = my_atoi(arg);
		break;
	case 2:
		info->base = my_atoi(arg);
		break;
	case 3:
		info->imin = my_atoi(arg);
		break;
	case 4:
		info->imax = my_atoi(arg);
		break;
	default:
		return (84);
	}
	return (0);
}

static void getflag(char **av, info_t *info, int *i)
{
	char flag[5][6] = {"-n\0", "-p\0", "-b\0", "-imin\0", "-imax\0"};

	for (int j = 0; j < 5; j++)
		if (strcmp(av[*i], flag[j]) == 0) {
			simpleflag(j, info, av[*i + 1]);
			*i += 1;
			return;
		}
	exit_comment(2, "Error: bad option\n\0", 84);
}

info_t getoptprog(int ac, char **av)
{
	info_t info = {-1, -1, 10, 0, 100};

	if ((ac % 2) == 0 || ac == 1)
		exit_comment(2, "Error: bad number of option\n\0", 84);
	for (int i = 1; i < ac; i++) {
		getflag(av, &info, &i);
	}
	if ((info.nb == -1 && info.pal == -1) ||
		(info.nb != -1 && info.pal != -1) || info.base < 2 ||
		info.base > 10 || info.imin < 0 || info.imax < 0 ||
		info.imin > info.imax)
		exit_comment(2, "Error: bad option\n\0", 84);
	return (info);
}
