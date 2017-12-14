/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:09:09 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 22:19:40 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char *b;
	char *l;
	char *start_b;

	if (ft_strlen(little) == 0)
		return ((char *)big);
	b = (char *)big;
	l = (char *)little;
	start_b = b;
	while (*start_b)
	{
		if (*b == *l)
		{
			l++;
			if (*l == '\0')
				return (b - ft_strlen(little) + 1);
		}
		else
		{
			l = (char *)little;
			b = start_b++;
		}
		b++;
	}
	return (NULL);
}
