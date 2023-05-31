/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afedida <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:00:21 by afedida           #+#    #+#             */
/*   Updated: 2023/02/07 12:27:20 by afedida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while ((str[j] > 8 && str[j] < 14) || str[j] == 32)
		j++;
	if (str[j] == '+')
		j++;
	else if (str[j] == '-')
	{
		k = j;
		j++;
	}
	while (str[j] > 47 && str[j] < 58)
	{
		i *= 10;
		i += str[j] - 48;
		j++;
	}
	if (str[k] == '-' && (str[k + 1] > 47 && str[k + 1] < 58))
		i *= -1;
	return (i);
}

// int	main(void)
// {
// 	ft_atoi("-2147483648");
// }
// 	printf ("%d\n", atoi("2147483648"));
// 	printf ("%d\n\n", ft_atoi("2147483648"));	
// 	printf ("%d\n", atoi("-2147483649"));
// 	printf ("%d\n\n", ft_atoi("-2147483649"));
// }
// 	printf ("%d\n", atoi("\t\v\f\r\n \f-0605"));
// 	printf ("%d\n\n", ft_atoi("\t\v\f\r\n \f-0605"));
// 	printf ("%d\n", atoi("\t\v\f\r\n \f-00605"));
// 	printf ("%d\n\n", ft_atoi("\t\v\f\r\n \f-605"));
// }
// 	printf ("%d\n", atoi("-46"));
// 	printf ("%d\n\n", ft_atoi("-46"));
// 	printf ("%d\n", atoi("1234"));
// 	printf ("%d\n\n", ft_atoi("1234"));
// 	printf ("%d\n", atoi("-1234"));
// 	printf ("%d\n\n", ft_atoi("-1234"));
// 	printf ("%d\n", atoi("+1234"));
// 	printf ("%d\n\n", ft_atoi("+1234"));
// 	printf ("%d\n", atoi("+++1234"));
// 	printf ("%d\n\n", ft_atoi("+++1234"));
// 	printf ("%d\n", atoi("---1234"));
// 	printf ("%d\n\n", ft_atoi("---1234"));
// 	printf ("%d\n", atoi("--- 1234"));
// 	printf ("%d\n\n", ft_atoi("--- 1234"));
// 	printf ("%d\n", atoi(" ---1234"));
// 	printf ("%d\n\n", ft_atoi(" ---1234"));
// 	printf ("%d\n", atoi(" +++1234"));
// 	printf ("%d\n\n", ft_atoi(" +++1234"));
// 	printf ("%d\n", atoi("+++ 1234"));
// 	printf ("%d\n\n", ft_atoi("+++ 1234"));
// 	printf ("%d\n", atoi(" 1234"));
// 	printf ("%d\n\n", ft_atoi(" 1234"));
// 	printf ("%d\n", atoi("	 1234"));
// 	printf ("%d\n\n", ft_atoi("	 1234"));
// 	printf ("%d\n", atoi("	+- 1234"));
// 	printf ("%d\n\n", atoi("	+- 1234"));
// 	return (0);
// }