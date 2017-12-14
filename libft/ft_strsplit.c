/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 13:10:17 by rgaia             #+#    #+#             */
/*   Updated: 2017/10/09 23:49:35 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**split;

	i = 0;
	k = 0;
	if (!s || !(split = (char **)malloc(sizeof(char *) *
						(ft_strnword(s, c) + 1))))
		return (NULL);
	while (i < (size_t)ft_strnword(s, c))
	{
		if (!(split[i] = (char *)malloc(sizeof(char) *
							(ft_strlen(&s[k] + 1)))))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] && s[k] != c)
			split[i][j++] = s[k++];
		split[i][j] = '\0';
		i++;
	}
	split[i] = NULL;
	return (split);
}
