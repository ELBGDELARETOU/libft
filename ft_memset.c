/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:34:55 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/07 14:51:43 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int     ft_memset(char *str, char c, int n)
{
        int     i;

        i = 0;
        while (n > 0)
        {
                *str = c;
                n--;
                str++;
        }
        printf("%s", str);
        return (1);
}

int     main()
{
        char str[] = "ademlopsa";
        char    c = 'c';
        printf("%d", ft_memset(str, c, 5));
}
