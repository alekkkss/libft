/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digit_count(int n)
{
	int	i;

	i = 1;
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa_f2(char *s, int i, int m, int n)
{
	while (i--)
	{
		s[i] = m % 10 + 48;
		if (n == -2147483648 && m == 2147483647)
			s[i] = '8';
		if (i == 0 && n < 0)
			s[i] = '-';
		m /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		m;

	i = digit_count(n);
	m = n;
	if (n < 0)
		s = (char *) malloc (sizeof(char) * digit_count(n) + 2);
	else
		s = (char *) malloc (sizeof(char) * digit_count(n) + 1);
	if (!s)
		return (0);
	if (n < 0)
		i = digit_count(n) + 1;
	s[i] = 0;
	if (n == -2147483648)
		m++;
	if (n < 0)
		m *= -1;
	ft_itoa_f2(s, i, m, n);
	return (s);
}

// int	main(void)
// {
// 	// int	n = -123;

// 	printf("%s\n", ft_itoa(-2147483648));

// 	return (0);
// }
