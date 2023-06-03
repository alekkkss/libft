/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alx <alx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/06/03 14:18:34 by alx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = -1;
// 	j = -1;
// 	k = ft_strlen(dst);
// 	if (dst[0] == 0)
// 	{
// 		while ((int) dstsize - 1 > ++i && src[++j])
// 			dst[i] = src[j];
// 		dst[i] = 0;
// 		return (ft_strlen(src));
// 	}
// 	else if (src[0] == 0)
// 		return (ft_strlen(dst));
// 	if (dstsize <= ft_strlen(dst))
// 		return (ft_strlen(src) + dstsize);
// 	else
// 	{
// 		while (dst[++i])
// 			;
// 		while (dstsize > ft_strlen(dst) + 1 && src[++j])
// 			dst[i++] = src[j];
// 		dst[i] = 0;
// 		return (k + ft_strlen(src));
// 	}
// }

static const char	*ft_strlcat_2(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	i;

	d = ft_strlen(dst);
	i = -1;
	if (d >= dstsize)
		return (0);
	while (src[++i] && d + i < dstsize - 1)
		dst[d + i] = src[i];
	dst[d + i] = 0;
	return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d == 0)
		ft_strlcat_2(dst, src, dstsize);
	else if (d > dstsize)
		return (dstsize + s);
	else
		ft_strlcat_2(dst, src, dstsize);
	return (d + s);
}

// int	main (int ac, char **av)
// {
// 	// char dst0[16] = "pqrstuvwxyz";
// 	// char dst0[6] = "";
// 	char dst0[15] = "";
// 	// char dst1[16] = "pqrstuvwxyz";
// 	// char dst1[6] = "";
// 	char dst1[15] = "";

// 	printf ("%zu\n", strlcat (dst0, "lorem", atoi(av[1])));
// 	printf ("%s\n", dst0);
// 	printf ("%zu\n", ft_strlcat (dst1, "lorem", atoi(av[1])));
// 	printf ("%s\n", dst1);

// 	(void) ac;
// 	(void) av;

// 	return (0);
// }
