/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
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
// 	while (s[++i])
// 		if (s[i] >= 48 && s[i] <= 57)
// 			s[i] += 17;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	while (s[++i])
		f(i, s + i);
}
