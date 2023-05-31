/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:03:04 by afedida           #+#    #+#             */
/*   Updated: 2023/05/31 15:35:26 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((unsigned char) c >= 97 && (unsigned char) c <= 122)
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// 	return (0);
// }
