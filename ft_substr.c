/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:57:45 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 17:19:22 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start || s == NULL)
		return (NULL);
	tab = (char *)malloc(len + 1);
	if (!tab)
		return (NULL);
	while (s[start] && len > i && ft_isprint((unsigned char)s[start]))
	{
		tab[i] = s[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int	main(void)
{
	printf("%s", ft_substr("je vous souhaite la bienvenue", 7, 9));
}*/