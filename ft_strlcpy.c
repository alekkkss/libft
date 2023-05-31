/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}

// int	main(int ac, char **av)
// {
// 	// char d0[20];
// 	// char s0[20] = "HeLlO WoRlD !";
// 	char d1[20];
// 	char s1[20] = "HeLlO WoRlD !";

// 	// printf("%lu\n", strlcpy (d0, s0, atoi(av[1])));
// 	// printf ("%s\n", d0);
// 	printf("%lu\n", ft_strlcpy (d1, s1, atoi(av[1])));
// 	printf ("%s\n", d1);

// 	return (0);
// 	(void) ac;
// }