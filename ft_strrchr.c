/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	if (!(char) c)
		return ((char *) &s[ft_strlen(s)]);
	while (s[++i])
		if (s[i] == (char) c)
			j = i;
	if (j >= 0)
		return ((char *) &s[j]);
	return (0);
}

// int	main(void)
// {
// 	const char s[] = "abc";
// 	char c = '\0';
// 	printf ("%s\n", strrchr(s, c));
// 	return (0);
// }
