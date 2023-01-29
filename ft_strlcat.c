/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:11:49 by mhernang          #+#    #+#             */
/*   Updated: 2023/01/29 22:05:41 by mhernang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	leng_dest;
	unsigned int	leng_source;

	if ((!dest || !src) && !size)
		return (NULL);
	i = ft_strlen(dest);
	j = 0;
	leng_dest = ft_strlen(dest);
	leng_source = ft_strlen(src);
	if (size < 1)
		return (leng_source + size);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < leng_dest)
		return (leng_source + size);
	else
		return (leng_dest + leng_source);
}
