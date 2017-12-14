/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 17:50:43 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 22:33:39 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_size(size_t size)
{
	if (size == 0)
		return (0);
	return (size);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst2;
	char		*src2;
	size_t		size2;
	size_t		dst_len;

	dst_len = ft_strlen(dst);
	dst2 = dst;
	src2 = (char *)src;
	size2 = check_size(size);
	while (*dst2 && size2)
	{
		dst2++;
		size2--;
	}
	if (size2 == 0)
		return (ft_strlen(src) + size);
	size2 = size - ft_strlen(dst) - 1;
	if (size > ft_strlen(dst))
	{
		while (size2--)
			*dst2++ = *src2++;
		*dst2 = '\0';
	}
	return (dst_len + ft_strlen(src));
}
