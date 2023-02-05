/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:11:49 by mhernang          #+#    #+#             */
/*   Updated: 2023/02/05 21:30:39 by mhernang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strlen_max(char *dest, unsigned int size)
{
	int	i;

	i = 0;
	while (dest[i] && size > 0)
	{
		i++;
		size--;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	leng_dest;
	unsigned int	leng_source;

	if ((!dest || !src) && !size)
		return (0);
	i = ft_strlen_max(dest, size);
	j = 0;
	leng_dest = ft_strlen_max(dest, size);
	leng_source = ft_strlen(src);
	if (size < 1)
		return (leng_source + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	if (size < leng_dest)
		return (leng_source + size);
	else
		return (leng_dest + leng_source);
}
