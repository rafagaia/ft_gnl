/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:57:02 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/22 12:24:47 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *index;
	char *last;

	index = (char *)s;
	last = NULL;
	while (*index)
	{
		if (*index == (char)c)
			last = index;
		index++;
	}
	if (*index == (char)c)
		last = index;
	return (last);
}
