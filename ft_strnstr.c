/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:37:33 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/31 16:21:22 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(str2);
	if (!*str2)
		return ((char *)str1);
	while (i + l <= n && str1[i])
	{
		if (ft_strncmp(str1 + i, str2, l) == 0)
			return ((char *)(str1 + i));
		i++;
	}
	return (NULL);
}
