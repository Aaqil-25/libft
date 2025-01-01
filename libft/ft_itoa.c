/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdur-r <mabdur-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:01:26 by mabdur-r          #+#    #+#             */
/*   Updated: 2024/12/31 10:42:18 by mabdur-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static	void	ft_str(char *str, long num, int len)
{
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	ft_str(str, n, len);
	return (str);
}
