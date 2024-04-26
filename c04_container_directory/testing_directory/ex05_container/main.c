#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void) {
	printf("int value return from function `ft_atoi_base(char *str, char *base)`: ");
	printf("'%d'\n", ft_atoi_base("\t \n---+--+DCBAabEFG", "ABCDEFGH"));
	return (0);
}

