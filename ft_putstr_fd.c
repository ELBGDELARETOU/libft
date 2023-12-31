/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:26:48 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/17 15:36:32 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	c;

	c = 0;
	if (!s)
		return ;
	while (s[c])
	{
		write(fd, &s[c], 1);
		c++;
	}
}
/*
int	main(void)
{
	int fd = 1;
	char s[] = "adem";
	ft_putstr_fd(s, fd);
}*/