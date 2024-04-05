#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void) {
	int	a;
	int	b;
	int	*pA;
	int	*pB;

	a = 66;
	b = 7;
	pA = &a;
	pB = &b;
	printf("a: \"%d\", b: \"%d\"\n", a, b);
	ft_ultimate_div_mod(pA, pB);
	printf("a: \"%d\", b: \"%d\"\n", a, b);
}
