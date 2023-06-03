/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alx <alx@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:39:26 by afedida           #+#    #+#             */
/*   Updated: 2023/06/03 14:16:25 by alx              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*ptr;

	i = 0;
	ptr = (void *) malloc (count * size);
	if (!ptr || size > 2147483647)
		return (0);
	while (i < (int) count * (int) size)
	{
		ft_bzero(ptr + i, 1);
		i++;
	}
	return (ptr);
}
