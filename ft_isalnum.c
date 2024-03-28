/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:14:41 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/09 12:00:52 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int a)
{
	if (!((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')
			|| (a >= '0' && a <= '9')))
		return (0);
	return (1);
}