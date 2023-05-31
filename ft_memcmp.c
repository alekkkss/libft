/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:57 by afedida           #+#    #+#             */
/*   Updated: 2023/05/31 14:55:01 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*t1;
	const unsigned char	*t2;
	int					i;

	i = -1;
	t1 = (const unsigned char *) s1;
	t2 = (const unsigned char *) s2;
	while (++i < (int) n)
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
	return (0);
}
