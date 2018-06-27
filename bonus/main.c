/*
** EPITECH PROJECT, 2018
** yet another main
** File description:
** main
*/

#include <stdio.h>
#include "project.h"

int main(int ac, char **av)
{
	info_t info = getoptprog(ac, av);

	if (info.nb != -1)
		turnover(info.nb, info);
	else
		palin(info);
	return (0);
}
