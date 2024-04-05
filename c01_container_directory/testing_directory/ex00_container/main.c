#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void) {
	int	nbr = 20;
	printf("nbr: \"%d\"\n", nbr);
	int	*pNbr = &nbr;
	ft_ft(pNbr);
	printf("nbr: \"%d\"\n", nbr);
}
