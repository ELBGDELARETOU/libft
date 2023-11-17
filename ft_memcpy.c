/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:50:59 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/17 15:19:56 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1;

	src1 = src;
	dest1 = dest;
	if (!dest && !src)
		return(NULL);		
	while (n > 0)
	{
		*dest1 = *src1;
		dest1++;
		src1++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char		dest[] = "adem";
	const char	src[] = "nico";
	int			n;

	n = 4;
	printf("%s", ft_memcpy(dest, src, n));
}*/
