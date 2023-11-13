/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:25:14 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 00:38:59 by ademnaouali      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *str)
{
	size_t	size;
	size_t	i;
	char	*dest;

	i = 0;
	size = ft_strlen(str);
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (NULL);
	while (size > 0)
	{
		dest[i] = str[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (dest);
}
