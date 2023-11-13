/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:14:14 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 00:45:48 by ademnaouali      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	*p = *ptr i = 0;
	while (i < n)
	{
		if (p[i] == value)
			return (p + i);
		i++;
	}
	return (NULL);
}