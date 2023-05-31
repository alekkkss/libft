/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n && s1[i] && s2[i])
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	if (!n)
		return (0);
	if ((!s1[i] || !s2[i]) && i != n)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "abcdef";
// 	char s2[] = "abcdefghijklmnop";
// 	printf ("%d\n", ft_strncmp(s1, s2, 6));
// 	return (0);
// }
