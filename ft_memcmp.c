/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:24:24 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/18 15:46:27 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*l;
	const unsigned char	*r;

	l = s1;
	r = s2;
	if (!n)
		return (0);
	while (--n)
	{
		if (*l != *r)
			break ;
		l++;
		r++;
	}
	return ((int)(*l - *r));
}
