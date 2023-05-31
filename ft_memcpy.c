/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:55:24 by afedida           #+#    #+#             */
/*   Updated: 2023/05/31 14:55:28 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstt;
	const char	*srcc;
	int			i;

	dstt = (char *) dst;
	srcc = (const char *) src;
	i = -1;
	if (!dst && !src)
		return (0);
	while (++i < (int) n)
		dstt[i] = srcc[i];
	return ((void *) dst);
}
