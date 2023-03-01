/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:15:05 by mhernang          #+#    #+#             */
/*   Updated: 2023/01/23 20:11:09 by mhernang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*g;
	size_t	i;

	g = (char *) s;
	i = 0;
	while (i < n)
	{
		g[i] = (char)c;
		i++;
	}
	return (g);
}