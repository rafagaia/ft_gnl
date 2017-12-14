/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:56:49 by rgaia             #+#    #+#             */
/*   Updated: 2017/12/05 21:57:06 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;
	t_list	*temp;

	last = new;
	if (*alst == NULL)
		*alst = last;
	else
	{
		temp = *alst;
		while (temp->next)
			temp = temp->next;
		temp->next = last;
	}
}
