/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngaotha <papad21297@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:46:41 by pngaotha          #+#    #+#             */
/*   Updated: 2024/04/26 18:06:33 by pngaotha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
22 lines
int	ft_atoi_base(char *str, char *base);
8 lines
int	contain_character(char *str, char ch);
9 lines
int	ft_strlen(char *str);
19 lines
int	double_char(char *symbols);
*/

#include <unistd.h>

int	contain_character(char *str, char ch);
int	ft_strlen(char *str);
int	double_char(char *symbols);

int	ft_atoi_base(char *str, char *base)
{
	short	parity;
	int	number;

	parity = number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	// while (*str >= 48 && *str <= 57)
	while (contain_character(base, *str))
	{
		number *= ft_strlen(base);
		number += *str - 'A';
		++str;
	}
	if (!(parity %2))
		return (number);
	return (-number);
}

int	contain_character(char *str, char ch)
{
	while (*str != '\0')
	{
		if (*str == ch)
			return (1);
		str++;
	}
	return (0);
}

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (*str != '\0')
        {
                i++;
                str++;
        }
        return (i);
}

int	double_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(symbols) < 2)
		return (0);
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
