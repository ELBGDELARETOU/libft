/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:10:35 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 00:46:24 by ademnaouali      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
}