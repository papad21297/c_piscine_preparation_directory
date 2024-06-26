/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngaotha <papad21297@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:45:52 by pngaotha          #+#    #+#             */
/*   Updated: 2024/04/08 00:53:29 by pngaotha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 == *s2 && --n && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
