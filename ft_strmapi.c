/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:39:53 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/23 17:41:08 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new_str;

	i = -1;
	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_str == NULL)
		return (NULL);
	while (s[++i] != '\0')
		new_str[i] = f(i, s[i]);
	new_str[i] = '\0';
	return (new_str);
}
