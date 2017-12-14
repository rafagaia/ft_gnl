/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 14:14:59 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 22:18:31 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sr;

	dest = dst;
	sr = (unsigned char *)src;
	while (n--)
	{
		*dest++ = *sr;
		if (*sr == (unsigned char)c)
			return (dest);
		sr++;
	}
	return ((void *)0);
}
