/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:40:12 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 14:54:42 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1bis;
	const char	*s2bis;
	size_t		i;
	size_t		c;
	size_t		k;

	s1bis = s1;
	s2bis = s2;
	i = 0;
    k = 0;
	while (i < n)
	{
		c = s2bis[i] - s1bis[i];
		k = k + c;
		i++;
	}
	return (k);
}
/*
int	main(void)
{
	size_t n = 9;
	printf("%d", ft_memcmp("on est la", "on est la", n));
}*/