/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 13:37:06 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 13:55:16 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *new;

	if (!lst)
		return (NULL);
	new_lst = f(lst);
	new = new_lst;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new_lst->next = f(lst)))
		{
			free(new_lst->next);
			return (NULL);
		}
		new_lst = new_lst->next;
	}
	return (new);
}
