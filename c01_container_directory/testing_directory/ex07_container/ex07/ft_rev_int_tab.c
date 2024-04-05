void	swap(int *p, int *p1);

void	ft_rev_int_tab(int *tab, int size)
{
	int	swaps;
	int	i;

	i = 0;
	swaps = size / 2;
	while (swaps--) {
		swap(&(tab[i++]), &(tab[--size]));
	}
}

void	swap(int *p, int *p1)
{
	int	tmp;

	tmp = *p;
	*p = *p1;
	*p1 = tmp;
}
