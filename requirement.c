/*
** EPITECH PROJECT, 2018
** palindrome
** File description:
** requirement
*/

#include <stdlib.h>
#include <stdio.h>

int my_factrec_synthesis(int nb)
{
	if (nb < 0 || nb > 12) {
		return (0);
	} else if (nb == 0) {
		return (1);
	} else
		return (nb * my_factrec_synthesis(nb - 1));
}

int my_squareroot_synthesis(int nb)
{
	int i = 0;

	if (nb < 0)
		return (-1);
	else if (nb == 0)
		return (0);
	for (; nb > (i * i) && i < 46330; i += 10);
	i -= 10;
	for (; nb > (i * i) && i < 46341; i++);
	if (nb == (i*i))
		return (i);
	return (-1);
}
/*
**int main(int ac, char **av)
**{
**	if (ac != 3) {
**		printf("Need 2 arg\n");
**	} else {
**		if (av[1][0] == 'f')
**			printf("factorial of %d is %d\n", atoi(av[2]),
**				my_factrec_synthesis(atoi(av[2])));
**		if (av[1][0] == 's')
**			printf("square root of %d is %d\n", atoi(av[2]),
**				my_squareroot_synthesis(atoi(av[2])));
**	}
**}
*/
