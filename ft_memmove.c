/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:40:40 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/15 14:06:25 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (! dst && ! src)
		return (NULL);
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (s > d)
	{
		while (len)
		{
			*d++ = *s++;
			--len;
		}
	}
	else
	{
		while (len)
		{
			--len;
			d[len] = s[len];
		}
	}
	return (dst);
}
