#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void) {
	ft_putnbr(-2147483648);
	char	c = '\n';
	write(1, &c, 1);

	return (0);
}

