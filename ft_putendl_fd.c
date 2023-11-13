/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:44:55 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 00:02:36 by ademnaouali      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	c;

	c = 0;
	while (s[c])
	{
		write(fd, &s[c], 1);
		c++;
	}
	write(fd, "\n", 1);
}

int	main(void)
{
	int fd = 1;
	char s[] = "adem";
	ft_putendl_fd(s, fd);
}