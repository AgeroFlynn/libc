/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:06:10 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/18 17:30:49 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const char	*l;
	const char	*r;

	l = s1;
	r = s2;
	if (!n)
		return (0);
	while (*l == *r && n--)
		if (*l++ == 0 || *r++ == 0 || n == 0)
			return (0);
	return ((unsigned char) *l - (unsigned char) *r);
}
