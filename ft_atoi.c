/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:55:31 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/07 12:16:54 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	atoi;
	int	signe;

	signe = 1;
	atoi = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = signe * -1;
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		atoi = (atoi * 10 + (*str - '0'));
		str++;
	}
	return (atoi * signe);
}
