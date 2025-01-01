/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqil-25 <arkam.aaqil@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:46:25 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/28 00:45:33 by aaqil-25         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ls;

	while (*lst)
	{
		ls = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = ls;
	}
	*lst = NULL;
}
