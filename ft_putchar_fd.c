/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:15:34 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/10 09:53:19 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	char	myChar;
	int		myFileDescriptor;

	myChar = 'C';
	myFileDescriptor = 3;
	ft_putchar_fd(myChar, myFileDescriptor);
	return (0);
}
