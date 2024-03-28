/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:23:26 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/16 21:08:06 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			p;
	unsigned char	*x;
	unsigned char	*y;

	if (n == 0)
		return (0);
	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	p = 0;
	while (p < n && x[p] == y[p])
		p++;
	if (p == n)
		return (0);
	return (x[p] - y[p]);
}
