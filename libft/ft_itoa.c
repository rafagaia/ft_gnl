/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:41:34 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 22:44:52 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*sanitize_input(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_strdup("1"));
}

char			*ft_itoa(int n)
{
	int		num_digits;
	int		is_neg;
	char	*num_ascii;

	is_neg = 0;
	num_ascii = sanitize_input(n);
	if (!ft_strequ(num_ascii, "1"))
		return (num_ascii);
	if (n < 0)
		is_neg = 1;
	num_digits = is_neg + ft_numdigit(n);
	if (!(num_ascii = ft_strnew(num_digits)))
		return (NULL);
	if (is_neg)
	{
		num_ascii[0] = '-';
		n = -n;
	}
	num_ascii[num_digits] = '\0';
	while (n > 0 && num_digits--)
	{
		num_ascii[num_digits] = n % 10 + '0';
		n = n / 10;
	}
	return (num_ascii);
}
