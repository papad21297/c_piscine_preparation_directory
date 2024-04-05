#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void) {
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*pDiv;
	int	*pMod;

	a = 66;
	b = 7;
	pDiv = &div;
	pMod = &mod;
	ft_div_mod(a, b, pDiv, pMod);
	printf("a: \"%d\", b: \"%d\", div: \"%d\", mod: \"%d\"\n", a, b, div, mod);
	return (0);
}
