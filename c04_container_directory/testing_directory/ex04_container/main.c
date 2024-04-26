#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void) {
	int	nbr = 20;
	char	base[20] = "poneyvif";

	printf("nbr value: '%d'\n", nbr);
	printf("base string value: \"%s\"\n", base);
	ft_putnbr_base(nbr, base);
	char	c = '\n';
	write(1, &c, 1);

	return (0);
}

