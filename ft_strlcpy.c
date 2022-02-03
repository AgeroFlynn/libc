/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:13:04 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/15 17:17:39 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		n;
	const char	*s;
	char		*d;

	n = dstsize;
	s = src;
	d = dst;
	if (dstsize)
	{
		while (*s && n-- != 1)
			*d++ = *s++;
		*d = 0;
	}
	return (ft_strlen(src));
}
