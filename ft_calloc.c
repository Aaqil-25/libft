/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:41:15 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/31 15:11:36 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*x;

	if (s != 0 && n > SIZE_MAX / s)
		return (NULL);
	x = malloc(n * s);
	if (!x)
		return (NULL);
	ft_bzero(x, n * s);
	return (x);
}
