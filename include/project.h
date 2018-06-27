/*
** EPITECH PROJECT, 2018
** yet another header
** File description:
** header
*/

#ifndef PROJECT_H_
	#define PROJECT_H_

typedef struct info_s {
	int nb;
	int pal;
	int base;
	int imin;
	int imax;
} info_t;

void exit_comment(int fd, char *str, int rtn);
info_t getoptprog(int ac, char **av);
char *convert_base(unsigned int nb, int base, int maj);
int convert_base_to_ten(char *str, int base);
int power(int nb, int pow);
char *my_strcat(char *dest, char *src);
char *my_strrev(char *str);
void turnover(int nb, info_t info);
void palin(info_t info);
void print_sol(int nb);

#endif /* !PROJECT_H_ */
