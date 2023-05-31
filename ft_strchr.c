/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:58:26 by afedida           #+#    #+#             */
/*   Updated: 2023/05/31 14:58:29 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;
	int		i;

	i = -1;
	t = (char *) s;
	while (t[++i])
		if (t[i] == (char) c)
			return (&t[i]);
	if (!(char) c)
		return (&t[i]);
	return (0);
}

// int	main(void)
// {
// 	char s[] = "coucou";
// 	s[3] = 0;
// 	printf ("%s\n", s);
// 	printf ("%s\n", ft_strchr(s, 0));
// 	return (0);
// }
