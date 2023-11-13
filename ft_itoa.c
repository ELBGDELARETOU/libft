/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:03:47 by ademnaouali       #+#    #+#             */
/*   Updated: 2023/11/14 00:02:09 by ademnaouali      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			i;
	int			c;
	int			number;
	long int	lon;

	lon = n;
	number = ft_countlen(lon) - 1;
	c = ft_countlen(lon);
	i = 0;
	res = (char *)malloc(c + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[i++] = '-';
		lon = -lon;
	}
	while (number >= 0 && i++ < c)
	{
		res[number--] = lon % 10 + '0';
		lon = lon / 10;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	int n = -2147483648;
	printf("%s", ft_itoa(n));
}*/