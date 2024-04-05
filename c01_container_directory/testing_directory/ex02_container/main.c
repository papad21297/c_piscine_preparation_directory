#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void) {
	int	a = 24;
	int	b = 16;
	printf("a: \"%d\", b: \"%d\"\n", a, b);
	int	*pA = &a;
	int	*pB = &b;
	ft_swap(pA, pB);
	printf("a: \"%d\", b: \"%d\"\n", a, b);
	return (0);
}
