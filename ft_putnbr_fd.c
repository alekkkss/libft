/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:57:27 by afedida           #+#    #+#             */
/*   Updated: 2023/05/31 14:57:29 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{	
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd ('-', fd);
	}
	if (n < 10)
		ft_putchar_fd (n + 48, fd);
	else
	{
		ft_putnbr_fd (n / 10, fd);
		n = n % 10;
		ft_putchar_fd (n + 48, fd);
	}
}
