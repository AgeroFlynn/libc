/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:14:28 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/18 17:28:59 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print(int nb, int fd)
{
	int		value;
	int		digit;
	char	c;

	value = 1000000000;
	while (nb / value == 0)
		value = value / 10;
	while (value)
	{
		digit = nb / value;
		c = digit + '0';
		write(fd, &c, 1);
		if (digit)
			nb = nb % (digit * value);
		value = value / 10;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (!nb)
	{
		write(fd, "0", 1);
		return ;
	}
	print(nb, fd);
}
