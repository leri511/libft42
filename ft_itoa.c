/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:47:13 by hsievier          #+#    #+#             */
/*   Updated: 2023/05/24 11:05:56 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	size_num(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	n_long;

	n_long = (long) n;
	len = size_num(n_long);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n_long == 0)
		str[0] = '0';
	if (n_long < 0)
	{
		str[0] = '-';
		n_long = n_long * -1;
	}
	while (n_long > 0)
	{
		str[len] = (n_long % 10) + '0';
		n_long = n_long / 10;
		len--;
	}
	return (str);
}
