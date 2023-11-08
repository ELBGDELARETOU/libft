/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:41:04 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/08 11:15:46 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	const unsigned char	*src1 = src;

	dest1 = dest;
	if (dest1 < src1)
	{
		while (n > 0)
		{
			*dest1 = *src1;
			dest1++;
			src1++;
			n--;
		}
	}
	else if (dest1 > src1)
	{
		d += n;
		s += n;
		while (n > 0)
		{
			dest1--;
			src1--;
			*dest = *src1;
			n--;
		}
	}
	return (dest);
}
int	main(void)
{
	char src[] = "adem, nico";
	printf("%s", ft_memmove(src, src + 9, 4));
}