/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:23:57 by zel-yama          #+#    #+#             */
/*   Updated: 2024/10/30 10:32:31 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	newstrlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;
	size_t	i;

	k = newstrlen(dst);
	j = newstrlen(src);
	i = 0;
	if (!dst && size == 0)
		return (j);
	if (size <= k)
		return (j + size);
	while (i < (size - k - 1) && src[i])
	{
		dst[k + i] = src[i];
		i++;
	}
	dst[k + i] = '\0';
	return (k + j);
}
