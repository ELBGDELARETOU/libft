/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:57:08 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 00:07:53 by ademnaouali      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		str[i] = '0';
		n--;
		i++;
	}
}

//int	main(void)
//{
//	char	str[] = "ademlopsa";

//	printf("%d", ft_bzero(str, 6));
//}
/*
int main() {
    char str[10] = "Bonjour";
    ft_bzero(str, 2);
    
    // À ce stade, les 6 premiers caractères de la chaîne str sont maintenant des zéros.
    
    printf("Chaîne après bzero : %s\n", str);
    return 0;
}*/
