/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngaotha <papad21297@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:52:01 by pngaotha          #+#    #+#             */
/*   Updated: 2024/04/04 22:52:02 by pngaotha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (
			((*str < '0') || (*str > '9'))
		)
		{
			res = 0;
		}
		str++;
	}
	return (res);
}
