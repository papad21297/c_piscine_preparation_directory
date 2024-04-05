#include <unistd.h>

void ft_print_combn(int n);

int	main(void) {
	ft_print_combn(2);
	char c = '\n';
	write(1, &c, 1);
}
