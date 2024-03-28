/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:23:26 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/09 13:49:40 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			p;
	char			*x;
	const char		*y;

	x = (char *)dest;
	y = (const char *)src;
	p = 0;
	if (x < y)
	{
		while (p < n)
		{
			x[p] = y[p];
			p++;
		}
	}
	else if (x > y)
	{
		while (n > 0)
		{
			x[n - 1] = y[n - 1];
			n--;
		}
	}
	return (dest);
}
