/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-yama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:42:29 by zel-yama          #+#    #+#             */
/*   Updated: 2024/10/29 14:43:51 by zel-yama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	const char	*sc;

	sc = src;
	str = dst;
	i = 0;
	if (!sc && !str)
		return (NULL);
	while (i < n)
	{
		str[i] = sc[i];
		i++;
	}
	return ((void *)str);
}
