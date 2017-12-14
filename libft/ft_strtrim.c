/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:25:33 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 21:57:14 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblank_trim(int c)
{
	return ((c == ' ' || c == '\t' || c == '\n') ? 1 : 0);
}

char		*ft_strtrim(char const *s)
{
	char	*str_trim;
	int		index_end;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	index_end = 0;
	i = 0;
	len = ft_strlen(s);
	if (!(str_trim = ft_strnew(len)))
		return (NULL);
	while (i < len)
	{
		if (!index_end && ft_isblank_trim(s[i]))
			i++;
		else
			str_trim[index_end++] = s[i++];
	}
	while (ft_isblank_trim(str_trim[--index_end]))
		str_trim[index_end] = '\0';
	return (str_trim);
}
