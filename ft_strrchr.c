/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:42:51 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/18 15:52:30 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*src;
	unsigned char	value;
	int				len;

	value = (unsigned char) c;
	len = ft_strlen(s);
	src = s;
	while (len + 1)
	{
		if (src[len] == value)
			return ((char *)(src + len));
		len--;
	}
	return (0);
}
