/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:24:00 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/17 18:18:23 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	n;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	n = len_dst;
	if (size == 0)
		return (len_src);
	while (src[i] && n + i < size - 1)
	{
		dst[n + i] = src[i];
		i++;
	}
	dst[i + n] = '\0';
	if (size < len_dst)
		return (size + len_src);
	return (len_src + len_dst);
}

/*int	main()
{
	printf("mia %zu \n", ft_strlcat("dest", "src", 1));
	//printf("sua %d \n", strlcat("dest", "src", 1));
}*/
