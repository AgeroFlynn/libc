/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:30:59 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/15 17:19:29 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (! dst && ! src)
		return (dst);
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	while (n)
	{
		*d++ = *s++;
		--n;
	}
	return (dst);
}
