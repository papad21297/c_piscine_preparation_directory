#include <stdio.h>


void	ft_rev_int_tab(int *tab, int size);

int	main(void) {
	int	size;
	int	i;

	int	tab[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
	size = 10;
	printf("BEFORE:\n");
	while (i < size) {
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	i = 0;
	printf("AFTER:\n");
	while (i < size) {
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
