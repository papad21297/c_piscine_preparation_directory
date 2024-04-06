/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngaotha <papad21297@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:10:31 by pngaotha          #+#    #+#             */
/*   Updated: 2024/04/06 13:17:25 by pngaotha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	byte_in_hex(unsigned char byte);
void	print_content_hex(void *addr, unsigned int size);
void	print_content_dot(void *addr, unsigned int size);

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*p_byte;
	int				little_endian;

	p_byte = (unsigned char *) &addr;
	little_endian = 0;
	while (little_endian < 8)
	{
		byte_in_hex(*(p_byte + (7 - little_endian)));
		little_endian++;
	}
	ft_putchar(':');
	print_content_hex(addr, size);
	print_content_dot(addr, size);
	return (addr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	byte_in_hex(unsigned char byte)
{
	int	int4upper_bits;
	int	int4lower_bits;

	int4upper_bits = (byte & 0b11110000) >> 4;
	int4lower_bits = (byte & 0b00001111);
	if (int4upper_bits > 9)
	{
		ft_putchar((int4upper_bits - 10) + 'a');
	}
	else
	{
		ft_putchar(int4upper_bits + '0');
	}
	if (int4lower_bits > 9)
	{
		ft_putchar((int4lower_bits - 10) + 'a');
	}
	else
	{
		ft_putchar(int4lower_bits + '0');
	}
}

void	print_content_hex(void *str, unsigned int size)
{
	int	i;
	int	limit;
	int	x;

	limit = 16;
	i = 0;
	while (--size && limit--)
	{
		if ((i % 2) == 0)
			ft_putchar(' ');
		byte_in_hex(*((unsigned char *) str));
		++str;
		++i;
	}
	x = ((limit * 2) + (limit / 2));
	while (x-- > 0)
		ft_putchar(' ');
	if ((i % 2) != 0)
		write(2, "  ", 1);
	else
		ft_putchar(' ');
}

void	print_content_dot(void *str, unsigned int size)
{
	int	limit;

	limit = 16;
	while (--size && limit--)
	{
		if (
			(*(char *) str >= 32)
			&& (*(char *) str <= 126)
		)
		{
			ft_putchar(*((char *) str));
		}
		else
		{
			ft_putchar('.');
		}
		++str;
	}
	ft_putchar('\n');
}
