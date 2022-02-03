/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:52:28 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/18 15:49:41 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*src;
	unsigned char	value;

	src = s;
	value = (unsigned char) c;
	while (*src)
	{
		if (*src == value)
			return ((char *) src);
		src++;
	}
	if (value == '\0')
		return ((char *) src);
	return (NULL);
}
