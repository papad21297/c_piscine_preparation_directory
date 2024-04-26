#include <stdio.h>

int	ft_atoi(char *str);
/*
int	ft_atoi_base(char *str, char *base);
*/

int	main(void) {
	printf("int value return from function `ft_atoi()`: ");
	printf("'%d'\n", ft_atoi("\t \n---+--+1234ab567"));
	return (0);
}

