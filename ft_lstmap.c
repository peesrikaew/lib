/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndod <ndod@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:17:05 by ndod              #+#    #+#             */
/*   Updated: 2023/09/11 14:35:25 by ndod             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp_lst;

	new_lst = NULL;
	tmp_lst = NULL;
	if (lst == NULL || *f == NULL)
		return (0);
	while (lst != NULL)
	{
		tmp_lst = ft_lstnew(f(lst -> content));
		if (tmp_lst == NULL)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, tmp_lst);
		lst = lst -> next;
	}
	return (new_lst);
}
