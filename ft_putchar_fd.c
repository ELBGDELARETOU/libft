/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:15:34 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/14 11:27:45 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	myChar;
	int		myFileDescriptor;

	myChar = 'C';
	myFileDescriptor = 3;
	ft_putchar_fd(myChar, myFileDescriptor);
	return (0);
}*/
