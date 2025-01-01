/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:22:21 by mabdur-r          #+#    #+#             */
/*   Updated: 2025/01/02 03:01:19 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_mem_fre(char **array, int i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
	return (NULL);
}

static int	ft_wd_cnt(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_al_w(const char *s, int start, int length)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (length + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < length)
	{
		word[i] = s[start + i];
		i++;
	}
	word[length] = '\0';
	return (word);
}

static char	**ft_splt_wd(const char *s, char c, char **result, int word_count)
{
	int	i;
	int	word_index;
	int	word_length;

	i = 0;
	word_index = 0;
	word_length = 0;
	while (word_index < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i + word_length] && s[i + word_length] != c)
			word_length++;
		result[word_index] = ft_al_w(s, i, word_length);
		if (!result[word_index])
			return (ft_mem_fre(result, word_index));
		i += word_length;
		word_length = 0;
		word_index++;
	}
	result[word_index] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_wd_cnt(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	return (ft_splt_wd(s, c, result, word_count));
}
