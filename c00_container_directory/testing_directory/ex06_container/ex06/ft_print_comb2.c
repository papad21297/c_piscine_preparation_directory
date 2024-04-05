#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_print(int n) {
	ft_putchar('0' + ((n - (n % 10)) / 10));
	ft_putchar('0' + (n % 10));
}

void ft_print_comb2(void) {
	int	i;
	int	j;

	i = 0;
	while (i < 99) {
		j = 0;
		while (j < (99 - i)) {
			ft_print(i);
			ft_putchar(' ');
			ft_print(1 + i + j);
			ft_putchar(',');
			ft_putchar(' ');
			j++;
		}
		i++;
	}
}
