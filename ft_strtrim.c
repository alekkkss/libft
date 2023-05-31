/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	// char	*ft_strtrim(char const *s1, char const *set)
	// {
	// 	return (0);

	// 	(void) s1;
	// 	(void) set;
	// }

int	strt(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (s1[++i])
	{
		j = -1;
		k = 0;
		while (set[++j])
			if (set[j] == s1[i])
				k++;
		if (!k)
			return (i);
	}
	return (0);
}

int	nd(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(s1);
	while (s1[--i])
	{
		j = -1;
		k = 0;
		while (set[++j])
			if (set[j] == s1[i])
				k++;
		if (!k)
			return (i + 1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;

	i = -1;
	j = strt(s1, set);
	s2 = (char *) malloc (sizeof(char) * (nd(s1, set) - strt(s1, set) + 1));
	if (!s2)
		return (0);
	while (j < nd(s1, set))
		s2[++i] = s1[j++];
	s2[++i] = 0;
	return (s2);
}

// int	main(void)
// {
// 	const char s1[] = "";
// 	const char set[] = "";
// 	printf("%zu: s\n", ft_strlen(s1));
// 	printf("%s: s\n", ft_strtrim(s1, set));
// 	printf("%d: i\n", strt(s1, set));
// 	printf("%d: i\n", nd(s1, set));
// 	printf("%d: i\n", nd(s1, set) - strt(s1, set) + 1);
// 	return (0);
// }