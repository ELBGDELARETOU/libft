/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:57:45 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/09 18:26:35 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;

	tab = (char *)malloc(len);
	if (!tab)
		return (NULL);
	while (s[start] && len > 0)
	{
		tab[start] = s[start];
		start++;
		len--;
	}
	return (tab);
}

int	main(void)
{
	printf("%s", ft_substr("je vous souhaite la bienvenue", 7, 9));
}