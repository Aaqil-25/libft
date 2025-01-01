/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:25:24 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/28 17:04:11 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	i = ft_strlen(str);
	if (!str && !chr)
		return (NULL);
	if (chr == 0)
		return ((char *)str + i);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)chr)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
