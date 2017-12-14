/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:17:22 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 21:46:22 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	char *str1;
	char *str2;

	if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		str1++;
		str2++;
	}
	return (0);
}
