/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:15:10 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/09 11:07:57 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[c] && len > c)
		{
			i++;
			c++;
			if (c == len)
				return ((char *)haystack - c - 1);
		}
		else
		{
			c = 0;
			i++;
		}
	}
	return (NULL);
}

int	main(void)
{
	const char haystack[] = "je vous souhaite la bienvenue";
	const char needle[] = "souhait";
	size_t len = 3;
	printf("%s", strnstr(haystack, needle, len));
}