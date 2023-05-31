/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:02:11 by afedida           #+#    #+#             */
/*   Updated: 2023/05/31 15:02:13 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	t = (char *)malloc(sizeof(char) * (len + 1));
	if (!t)
		return (0);
	t[len] = 0;
	while (len--)
		t[len] = s[start + len];
	return (t);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*t;
// 	int		i;

// 	i = -1;
// 	if (len > ft_strlen(s))
// 		len = ft_strlen(s);
// 	if (start < len)
// 		t = (char *) malloc (sizeof(char) * (len + 1));
// 	else
// 		t = (char *) malloc (sizeof(char));
// 	if (!t)
// 		return (0);
// 	if ((unsigned int) ft_strlen(s) > start)
// 		len += start;
// 	while (s[++i] && start < len)
// 		t[i] = s[start++];
// 	t[i] = 0;
// 	return (t);
// }

// int	main(void)
// {
// 	char s[] = "hola";
// 	unsigned int start = 2;
// 	size_t len = 1;
// 	printf("%zu: l1\n", ft_strlen(s));
// 	printf("%zu: l2\n", ft_strlen(ft_substr(s, start, len)));
// 	printf("%s\n", ft_substr(s, start, len));
// 	return (0);
// }
