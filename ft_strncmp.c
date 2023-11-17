/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:02:41 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/17 16:59:05 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*str1bis;
	unsigned char	*str2bis;
	size_t			i;

	i = 0;
	str1bis = (unsigned char *)str1;
	str2bis = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (n - 1 > i && str1bis[i] && str2bis[i] && str1bis[i] == str2bis[i])
		i++;
	return (str1bis[i] - str2bis[i]);
}
/*
int	main(void)
{
	const char str1[] = "adem a le palu";
	const char str2[] = "adem a pas le palu";
	printf("%d\n", ft_strncmp(str1, str2, 8));
}*/