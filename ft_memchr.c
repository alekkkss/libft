/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:39 by afedida           #+#    #+#             */
/*   Updated: 2023/05/31 14:54:44 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;
	int					i;

	i = -1;
	t = (const unsigned char *) s;
	while (++i < (int) n)
		if (t[i] == (unsigned char) c)
			return ((void *) s + i);
	return (0);
}
