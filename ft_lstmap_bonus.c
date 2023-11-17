/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:54:56 by anaouali          #+#    #+#             */
/*   Updated: 2023/11/17 15:00:36 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *n_lst;
//     t_list *first;

//     first = n_lst;
// 	while (lst && lst->next)
// 	{
// 		n_lst = malloc((*f)(lst->content));
//         if (!n_lst)
//             free()
// 		del(lst->content);
//         free(lst);
// 		lst = lst->next;
// 		n_lst = n_lst->next;
// 	}
// 	return (n_lst);
// }