/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:33:00 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/16 19:23:16 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;
	size_t	x;
	int		i;

	x = 0;
	i = 0;
	l = 0;
	b = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[x] != '\0' && x + ft_strlen(little) <= len)
	{
		l = 0;
		b = x;
		while (big[b] == little[l] && little[l] != '\0' && l < len)
		{
			b++;
			l++;
		}
		if (little[l] == '\0')
			return ((char *)&big[x]);
		x++;
	}
	return (NULL);
}
/*int main()
{
	char str[40] = "canegatocttane";
	char to_find[40] = "tane";
	char *dest;
	
	dest = ft_strnstr(str, to_find, 20);
	
	printf("mio %s\n", dest);
	printf("vero %d\n", strnstr(str, to_find, 20));
}*/
