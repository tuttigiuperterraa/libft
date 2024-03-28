/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:01:42 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/19 19:18:37 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	magnitude(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	l;

	l = n;
	i = magnitude(l);
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (l == 0)
		str[0] = '0';
	if (l < 0)
	{
		l *= -1;
		str[0] = '-';
	}
	str[i] = '\0';
	while (l > 0)
	{
		str[i - 1] = (l % 10) + 48;
		l /= 10;
		i--;
	}
	return (str);
}
