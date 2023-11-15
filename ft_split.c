/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:55:01 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/15 18:23:31 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	my_free_all(char **res, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(res[i]);
		i++;
	}
	free(res);
}
int	ft_char_is_in_str(char const *str, char c)
{
	int	i;

	i = 0;
	if (c == str[i])
		return (1);
	return (0);
}

int	ft_count_words(char const *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_char_is_in_str(&str[i], c))
		{
			words++;
			while (!ft_char_is_in_str(&str[i], c) && str[i])
				i++;
		}
		i++;
	}
	return (words);
}

char	*ft_get_next_words(int *index, char const *str, char c)
{
	int		len;
	int		i;
	char	*res;

	i = -1;
	len = 0;
	while (ft_char_is_in_str(&str[*index], c))
		(*index)++;
	while (!ft_char_is_in_str(&str[*index + len], c) && str[*index + len])
		len++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (++i < len)
	{
		res[i] = str[*index];
		*index = *index + 1;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		cw;
	char	**res;

	i = -1;
	j = 0;
	cw = ft_count_words(str, c);
	res = malloc((cw + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (++i < cw)
	{
		res[i] = ft_get_next_words(&j, str, c);
		if (res[i] == NULL)
		{
			my_free_all(res, i);
			return (NULL);
		}
	}
	res[i] = NULL;
	return (res);
}

int	main(void)
{
	char	**test;
	char	str[] = "tripouille";
	char	c;
	int		i;

	c = '\0';
	i = -1;
	test = ft_split(str, c);
	while (test[++i])
		printf("%s\n", test[i]);
}
