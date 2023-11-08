/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:57:08 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/08 11:16:50 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_bzero(char *str, int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		str[i] = '0';
		n--;
		i++;
	}
	printf("%s", str);
	return (1);
}

int	main(void)
{
	char	str[] = "ademlopsa";

	printf("%d", ft_bzero(str, 5));
}
