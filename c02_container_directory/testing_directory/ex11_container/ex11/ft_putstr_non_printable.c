/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngaotha <papad21297@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 23:05:08 by pngaotha          #+#    #+#             */
/*   Updated: 2024/04/06 02:06:32 by pngaotha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n > 16)
	{
		print_hex(n / 10);
		print_hex(n % 10);
	}
	else
	{
		write(1, &hex[n], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (
			(
				(*str >= 0)
				&& (*str <= 31)
			)
			|| (*str == 127)
		)
		{
			write(1, "\\", 1);
			if (*str < 16)
			{
				write(1, "0", 1);
			}
			print_hex(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
