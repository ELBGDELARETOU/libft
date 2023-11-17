/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:15:10 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/09 11:07:57 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *litlle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	j = 0;
	ret = (char *)big;
	i = 0;
	if (big[j] == 0 && litlle[j] == 0)
		return ((char *)big);
	if (!litlle || len == 0 || !big)
		return ((char *)big);
	while (i < len && big[i])
	{
		while (big[i + j] == litlle[j] && ((i + j) < len))
		{
			j++;
			if (litlle[j] == '\0')
				return (&ret[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char big[30] = "";
// 	const char litlle[10] = "";
// 	size_t len = -1;
// 	printf("%s", ft_strnstr(big, litlle, len));
// }

// char	*ret;
// ret = (char *)big;
