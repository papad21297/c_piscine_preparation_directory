/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngaotha <papad21297@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:54:38 by pngaotha          #+#    #+#             */
/*   Updated: 2024/03/27 14:31:26 by pngaotha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	ft_putchar('0' + i);
	ft_putchar('0' + (i + j));
	ft_putchar('1' + ((i + j) + k));
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = 1;
		while (j <= (8 - i))
		{
			k = 0;
			while (k < (9 - (i + j))) {
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
