/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:19:46 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/17 18:33:52 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 && size == 0)
		exit (0);
	if (nmemb == 0 || size == 0 || (size * nmemb) > ULONG_MAX)
		return (NULL);
	arr = (void *)malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, size * nmemb);
	return (arr);
}
