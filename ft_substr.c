/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:54:55 by mhernang          #+#    #+#             */
/*   Updated: 2023/01/29 21:33:41 by mhernang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*t;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		t = malloc (1);
		return (t);
	}
	t = malloc ((len * sizeof(char)) + 1);
	if (!t)
		return (NULL);
	while (s[start] && len > 0)
	{
		t[i] = s[start];
		len--;
		i++;
		start++;
	}
	t[i] = '\0';
	return ((char *) t);
}
