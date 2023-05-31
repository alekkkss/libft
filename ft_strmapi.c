/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	f(unsigned int i, char *s)
// {
// 	if (s[i] == 111)
// 		s[i] -= 35;
// }

// void	ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		f(i, s);
// 		i++;
// 	}
// }

//

// char	f(unsigned int i, char c)
// {
// 	if (c >= 65 && c <= 90)
// 		c += 32;
// 	else if (c >= 97 && c <= 122)
// 		c -= 32;
// 	return (c);
// 	(void) i;
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	int		i;

	i = -1;
	t = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!t)
		return (0);
	while (s[++i])
		t[i] = f(i, s[i]);
	t[i] = 0;
	return (t);
}

// int	main(void)
// {
	// char s[] = "AaAbBbCcC";
	// ft_strmapi(s, f);
	// return (0);
// }
