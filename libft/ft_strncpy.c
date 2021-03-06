/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 12:17:09 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 22:26:25 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*dst_;

	dst_ = dst;
	while (len > 0)
	{
		if (*src == '\0')
			*dst_++ = '\0';
		else
		{
			*dst_++ = *src++;
		}
		len--;
	}
	return (dst);
}
