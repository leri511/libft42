/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsievier <hsievier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:06:32 by hsievier          #+#    #+#             */
/*   Updated: 2023/05/18 15:55:33 by hsievier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	ds = (char *) dest;
	sr = (char *) src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
