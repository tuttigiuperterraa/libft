/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:35:40 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/17 18:39:28 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	i;

	dup = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < ft_strlen(str))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
