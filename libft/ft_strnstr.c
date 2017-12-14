/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:37:52 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/22 12:54:55 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		lit_len;

	lit_len = ft_strlen(little);
	if (lit_len == 0)
		return ((char*)big);
	while (*big && lit_len <= len)
	{
		if (*big == *little)
		{
			if (ft_strncmp(big, little, lit_len) == 0)
				return ((char*)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
