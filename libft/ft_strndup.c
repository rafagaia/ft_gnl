/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 19:59:51 by rgaia             #+#    #+#             */
/*   Updated: 2017/11/03 19:59:58 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t len)
{
	char	*s2;

	s2 = ft_strnew(ft_strlen(s1));
	if (s2 == NULL)
		return (NULL);
	s2 = ft_strncpy(s2, s1, len);
	return (s2);
}
