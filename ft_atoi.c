/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:03:45 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/22 12:55:27 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == '\t')
		return (1);
	return (0);
}

static int	ft_get_sign(char value)
{
	if (value == '+')
		return (1);
	if (value == '-')
		return (-1);
	if (value >= '0' && value <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned int	result;
	int				i;

	i = 0;
	result = 0;
	if (!*str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	sign = ft_get_sign(str[i]);
	if (!ft_isdigit(str[i]))
		i++;
	if (!ft_isdigit(str[i]))
		return (0);
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (result > 2147483647 && sign > 0)
		return (-1);
	if (result > 2147483648 && sign < 0)
		return (0);
	return ((int)(result * sign));
}
