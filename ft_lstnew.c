/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 17:53:45 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/31 15:49:36 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_nod;

	n_nod = (t_list *)malloc(sizeof(t_list));
	if (!n_nod)
		return (NULL);
	n_nod->content = content;
	n_nod->next = NULL;
	return (n_nod);
}
