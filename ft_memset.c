/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:34:55 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/08 11:16:32 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str1;

	str1 = str;
	while (n > 0)
	{
		*str1 = c;
		n--;
		str1++;
	}
	printf("%s\n", str);
	return (str);
}

int	main(void)
{
	char	str[] = "ademlopsa";
	char	c;

	c = 'c';
	printf("%s", ft_memset(str, c, 5));
}
