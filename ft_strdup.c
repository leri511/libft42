/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:46:17 by hsievier          #+#    #+#             */
/*   Updated: 2023/05/22 15:05:43 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup;
	size_t	i;

	len = ft_strlen(str) + 1;
	dup = (char *) malloc(len);
	if (dup != NULL)
	{
		i = 0;
		while (i < len)
		{
			dup[i] = str[i];
			i++;
		}
	}
	return (dup);
}
