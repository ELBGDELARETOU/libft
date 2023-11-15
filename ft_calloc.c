/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:10:35 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/15 11:34:38 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(char *str, size_t n)
{
	size_t	i;
	char	c;

	i = 0;
	c = '\0';
	while (n > 0)
	{
		str[i] = c;
		n--;
		i++;
	}
}

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*tab;

	if (num_elements > 0 && element_size > 0 && (SIZE_MAX
			/ num_elements) < element_size)
		return (NULL);
	tab = (void *)malloc(num_elements * element_size);
	if (!tab)
		return (NULL);
	ft_bzero((char *)tab, num_elements * element_size);
	return (tab);
}
/*
int	main(void)
{
	size_t num_elements = 2;
	size_t element_size = 3;
	size_t *tab;
	int i = 0;

	tab = ft_calloc(num_elements, element_size);

	while (tab[i] > 4)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/