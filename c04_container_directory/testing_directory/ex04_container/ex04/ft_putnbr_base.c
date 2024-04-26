/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngaotha <papad21297@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:46:41 by pngaotha          #+#    #+#             */
/*   Updated: 2024/04/25 10:55:03 by pngaotha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		double_char(char *symbols);
void	print_nbr(int n, int base_value, char *symbols);
void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = 0;
	while (base[base_value])
	{
		if (base[base_value] == '+' || base[base_value] == '-')
			return ;
		++base_value;
	}
	if (base_value < 2)
		return ;
	if (double_char(base))
		return ;
	print_nbr(nbr, base_value, base);
}

int	double_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	while (*(symbols + i))
	{
		j = i + 1;
		while (*(symbols + j))
		{
			if (*(symbols + i) == *(symbols + j))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

void	print_nbr(int n, int base_value, char *symbols)
{
	long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		n_long = -n_long;
		ft_putchar('-');
	}
	if (n_long >= base_value)
		print_nbr(n_long / base_value, base_value, symbols);
	ft_putchar(symbols[n_long % base_value]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
