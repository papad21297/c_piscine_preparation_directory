/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngaotha <papad21297@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:45:52 by pngaotha          #+#    #+#             */
/*   Updated: 2024/04/19 18:04:37 by pngaotha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*s;
	unsigned int	len_dst;
	unsigned int	res;
	unsigned int	len_src;
	unsigned int	i;

	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_stren(s);
	res = 0;
	i = 0;
	if (size > len_dst)
		res = len_src + len_dst;
	else
		res = len_src + size;
	while (s[i] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
