/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaqil-25 <arkam.aaqil@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 08:14:49 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/27 07:58:37 by aaqil-25         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	l;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	l = ft_strlen(s1);
	while (s1[l - 1] && ft_strchr(set, s1[l - 1]))
		l--;
	str = malloc(sizeof(char) * (l - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, l - i + 1);
	return (str);
}
