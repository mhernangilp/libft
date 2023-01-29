/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhernang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:05:42 by mhernang          #+#    #+#             */
/*   Updated: 2023/01/29 19:55:56 by mhernang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*ret;

	temp = lst;
	if (!lst)
		return (ret);
	ft_lstiter(temp, f);
	ret = ft_lstnew(temp -> content);
	temp2 = ret;
	temp = temp -> next;
	while (temp)
	{
		temp2 -> next = ft_lstnew(temp -> content);
		temp = temp -> next;
		temp2 = temp2 -> next;
	}
	return (ret);
}
