/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:47:27 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/31 15:59:31 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int src, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dst;
	while (n > 0)
	{
		ptr[n - 1] = src;
		n--;
	}
	return (dst);
}
