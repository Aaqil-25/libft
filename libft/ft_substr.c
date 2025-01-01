/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:08:29 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/31 16:23:31 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen (s + start))
		len = ft_strlen(s + start);
	s1 = (char *)malloc(len * sizeof(char) + 1);
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[start + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
