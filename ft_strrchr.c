/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:49:22 by hsievier          #+#    #+#             */
/*   Updated: 2023/05/22 16:01:08 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*sr;

	sr = (char *)str;
	len = ft_strlen(str);
	if (c == '\0')
		return (sr + len);
	while (len >= 0)
	{
		if (sr[len] == (char)c)
			return (sr + len);
		len--;
	}
	return (0);
}
