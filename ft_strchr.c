/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:41 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/16 15:48:18 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((unsigned char)*s != (unsigned char)c && *s != '\0')
		s++;
	if ((unsigned char)c != '\0' && *s == '\0')
		return (NULL);
	return ((char *)s);
}

/*int	main()
{
	const char *str = "ciao";
	
	printf("mia %s \n", ft_strchr(str, 1));
	printf("sua %s \n", strchr(str, 1));
	
	return 0;
	}*/
