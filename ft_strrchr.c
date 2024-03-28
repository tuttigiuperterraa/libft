/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:26:41 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/16 17:59:54 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			p = (char *)s;
		s++;
	}
	if (*s == '\0' && c == 0)
		p = (char *)s;
	return (p);
}
/*int	main()
{
	const char *str = "ciaocI";
	
	printf("mia %s \n", ft_strrchr(str,'h'));
	printf("sua %s \n", strrchr(str,'h'));
	
	return 0;
	}*/
