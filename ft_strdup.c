/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:58:44 by afedida           #+#    #+#             */
/*   Updated: 2023/05/31 14:58:46 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = -1;
	s2 = (char *) malloc (sizeof(char) * (ft_strlen(s1) + 1));
	if (!s2)
		return (0);
	while (s1[++i])
		s2[i] = s1[i];
	s2[i] = 0;
	return (s2);
}
