/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = -1;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[0] && ++i < len)
	{
		j = 0;
		k = i;
		while (haystack[i] == needle[j] && haystack[i++] && needle[j++]
			&& i < len)
			;
		i = k;
		if (!haystack[i] && needle[j])
			return (0);
		if (!needle[j])
			return ((char *) &haystack[k]);
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	char s[] = "abcd";

// 	printf ("%s\n", strnstr("aaabcabcd", s, atoi(av[1])));
// 	printf ("%s\n", ft_strnstr("aaabcabcd", s, atoi(av[1])));

// 	return (0);

// 	(void) ac;
// }
