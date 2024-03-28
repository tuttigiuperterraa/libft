/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosenza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:45:23 by gcosenza          #+#    #+#             */
/*   Updated: 2023/10/23 17:45:43 by gcosenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_long;
	char	c;

	n_long = n;
	if (n_long < 0)
	{
		n_long *= -1;
		write(fd, "-", 1);
	}
	if (n_long >= 10)
		ft_putnbr_fd(n_long / 10, fd);
	c = (n_long % 10) + 48;
	write(fd, &c, 1);
}
