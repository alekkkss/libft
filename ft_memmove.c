/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dstt;
	const char	*srcc;

	dstt = (char *) dst;
	srcc = (const char *) src;
	if (!dst && !src)
		return (0);
	if (dstt < srcc)
		while (len--)
			*dstt++ = *srcc++;
	else
		while (len--)
			dstt[len] = srcc[len];
	return (dst);
}

// int main ()
// {
// 	char str[19] = "This is an example";
// 	// memcpy(str + 7, str, 12);
// 	// memmove(str + 7, str, 12);
// 	ft_memmove(str + 7, str, 12);
// 	printf ("%s\n", str); 
// }
