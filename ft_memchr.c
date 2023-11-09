/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:14:14 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/08 15:18:54 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	*p = *ptr i = 0;
	while (i < n)
	{
		if (p[i] == value)
			return (p + i);
		i++;
	}
	return (NULL)
}

int	main(void)
{
}