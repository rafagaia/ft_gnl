/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnword.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 22:29:08 by rgaia             #+#    #+#             */
/*   Updated: 2017/10/11 16:26:10 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** EXTRA:
** Returns number of words in string s, delimited by c
*/

int		ft_strnword(const char *s, char c)
{
	int		num_words;
	int		i;

	i = 0;
	num_words = 0;
	if (s[0] == '\0')
		return (0);
	if (s[1] == '\0' && s[0] != c)
		return (1);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			num_words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (num_words);
}
