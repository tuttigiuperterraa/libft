/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:27:37 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/23 17:27:57 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < ft_strlen(set))
	{
		j = 0;
		while (set[j] != '\0' && s1[i] != set[j])
			j++;
		i++;
	}
	return (i - 1);
}

size_t	stop(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	stop;

	i = 0;
	j = 0;
	while (ft_strlen(s1) - i > start(s1, set) && j < ft_strlen(set))
	{
		j = 0;
		while (set[j] != '\0' && s1[ft_strlen(s1) - i - 1] != set[j])
			j++;
		i++;
	}
	stop = ft_strlen(s1) - i;
	if (stop != ft_strlen(s1))
		stop += 2;
	return (stop);
}

char	*emptytrim(char *trim)
{
	trim = (char *)malloc(1);
	if (!trim)
		return (NULL);
	*trim = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*trim;

	trim = NULL;
	if (*set == '\0' || *s1 == '\0')
	{
		trim = ft_strdup(s1);
		return (trim);
	}
	if (stop(s1, set) - start(s1, set) == 0)
		return (emptytrim(trim));
	trim = (char *)malloc(stop(s1, set) - start(s1, set));
	if (!trim)
		return (NULL);
	i = 0;
	while (stop(s1, set) - i > start(s1, set) + 1)
	{
		trim[i] = s1[start(s1, set) + i];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}

/*int	main(void)
{
	char *str1 = "6CCICAoCICA";
	char *set = "CI";
    
    printf("nuova stringa: %zu\n", start(str1, set));
    printf("nuova stringa: %zu\n", stop(str1, set));
	printf("nuova stringa: %s\n", ft_strtrim(str1, set));
}*/
