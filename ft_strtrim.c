/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:51:47 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 15:24:32 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
size_t	ft_is_in_str(char c, const char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		if (c == str[i])
			return (1);
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	k;

	i = 0;
	k = 0;
	len = ft_strlen(s1);
	j = len - 1;
	while (*s1 && ft_is_in_str(s1[i], set))
		i++;
	while (s1[j] && ft_is_in_str(s1[j], set))
		j--;
	tab = (char *)malloc((j - i) + 2);
	if (!tab)
		return (NULL);
	while (i <= j)
	{
		tab[k] = s1[i];
		i++;
		k++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
int	main(void)
{
	char const s1[] = "bonjourbaobabbamboubonjour";
	char const set[] = "bonjour";
	char *tab;

	tab = ft_strtrim(s1, set);
	while (*tab)
	{
		printf("%c", *tab);
		tab++;
	}
}*/