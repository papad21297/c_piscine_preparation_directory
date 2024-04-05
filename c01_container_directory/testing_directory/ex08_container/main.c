#include <stdio.h>
#include <stdlib.h>

/*
ls -dl *
*/

void	ft_sort_int_tab(int *tab, int size);

int	main(void) {
	int	i;

	int	size = 16;
	int	tab[16] = {
		3, 1, 4, 15, 9, 2, 6, 5, 35, 8, 97,
		93, 23, 84, 26, 43
	};

	i = 0;
	printf("BEFORE:\n");
	while (i < size) {
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("AFTER:\n");
	i = 0;
	while (i < size) {
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");

	return (0);
}
