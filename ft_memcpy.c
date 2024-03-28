/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:36:24 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/23 18:38:48 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t		p;

	p = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	while (p < n)
	{
		dest_ptr[p] = src_ptr[p];
		p++;
	}
	return (dest);
}
