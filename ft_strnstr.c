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

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[c])
		{
			i++;
			c++;
			if (needle[c] == '\0')
				return ((char *)haystack + i - c);
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
	const char needle[] = "vous";
	size_t len = 30;
	printf("%s", ft_strnstr(haystack, needle, len));
}