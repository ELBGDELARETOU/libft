/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:12:10 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/16 18:31:06 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	size_t	i;
	size_t	s;

	i = 0;
	s = 0;
	tab = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!tab)
		return (NULL);
	while (s1[s])
	{
		tab[s] = s1[s];
		s++;
	}
	while (s2[i])
	{
		tab[s] = s2[i];
		i++;
		s++;
	}
	tab[s] = '\0';
	return (tab);
}
/*
int	main(void)
{
	int i;
	char *tab;
	const char s1[] = "adem";
	const char s2[] = "naouali";

	i = 0;
	tab = ft_strjoin(s1, s2);
	while (tab[i])
	{
		printf("%c", tab[i]);
		i++;
	}
}*/