/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:38:13 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/28 14:31:48 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_l;
	t_list	*n_n;

	if (!f | !lst | !del)
		return (NULL);
	n_l = NULL;
	while (lst)
	{
		n_n = ft_lstnew(f(lst->content));
		if (!n_n)
		{
			ft_lstdelone(n_l, del);
			return (NULL);
		}
		ft_lstadd_back(&n_l, n_n);
		lst = lst->next;
	}
	return (n_l);
}
