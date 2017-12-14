/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:31:00 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/22 12:18:34 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *index;

	index = (char *)s;
	while (*index)
	{
		if (*index == (char)c)
			return (index);
		index++;
	}
	if (*index == (char)c)
		return (index);
	return (NULL);
}
