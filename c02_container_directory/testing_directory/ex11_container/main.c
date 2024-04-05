#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void) {
	char	*str;

	str = "something\t\tto\ntell you...";
	ft_putstr_non_printable(str);
	printf("\n");
	return (0);
}
