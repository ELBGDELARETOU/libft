/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:01:14 by ademnaouali       #+#    #+#             */
/*   Updated: 2023/11/13 23:59:55 by ademnaouali      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t c;

    i = 0;
    c = 0;
    while (dest[i])
        i++;
    while (src[c] && c < size - 1 && size != 0)
    {
        dest[i] = src[c];
        i++;
        c++;
    }
    dest[i] = '\0';
    printf("%s", dest);
    return (i);
}
/*
int main()
{
    char dest[] = "manu je t";
    char src[] = "aime";
    printf("%d", ft_strlcat(dest, src, 2));
}*/