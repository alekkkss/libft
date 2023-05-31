/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	string_counter(char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c && i == 0)
			while (s[k++])
				if (s[k] != c)
					j = -1;
		while (s[i] && s[i] != c)
			i++;
		j++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (j);
}

int	ft_strlen_split(char const *s, char c, int j)
{
	int	i;

	i = 0;
	while (s[j] && s[j] == c)
		j++;
	while (s[j] && s[j] != c)
	{
		i++;
		j++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	ss = (char **) malloc (sizeof(char *) * (string_counter(s, c) + 1));
	if (!ss)
		return (0);
	while (++i < string_counter(s, c))
	{
		k = 0;
		ss[i] = (char *) malloc ((ft_strlen_split(s, c, j) + 1) * sizeof(char));
		if (!ss[i])
			return (0);
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			ss[i][k++] = s[j++];
		ss[i][k] = 0;
	}
	ss[i] = 0;
	return (ss);
}

// int	main(void)
// {
// 	// printf ("%d\n", ft_strlen_split("aaaaceec", 'c', 7));
// 	// printf ("%d\n", string_counter("aaaccaaaaceeciiiicaccc", 'c'));
// 	ft_split ("hello!zzzzzzzz", 'z');

// 	return (0);
// }