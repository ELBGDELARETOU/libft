/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:10:35 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/09 15:23:20 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_bzero(char *str, int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		str[i] = '0';
		n--;
		i++;
	}
	return (1);
}

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*tab;

	tab = (void *)malloc(num_elements * element_size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, num_elements);
	return (tab);
}

int	main(void)
{
	size_t	num_elements;
	size_t	element_size;
	size_t	*tab;

	num_elements = 2;
	element_size = sizeof(size_t);
	tab = ft_calloc(num_elements, element_size);
	if (!tab)
	{
		printf("Allocation de mémoire a échoué.\n");
		return (1);
	}
	// Vous devez initialiser les valeurs du tableau
	for (size_t i = 0; i < num_elements; i++)
	{
		tab[i] = i;
	}
	for (size_t i = 0; i < num_elements; i++)
	{
		printf("%zu ", tab[i]);
	}
	free(tab);
	return (0);
}
