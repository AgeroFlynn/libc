/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:35:26 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/22 12:59:08 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*stack_offset;
	const char	*needle_offset;
	size_t		i;

	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (*haystack && len--)
	{
		i = 0;
		stack_offset = haystack;
		needle_offset = needle;
		while (*stack_offset++ == *needle_offset++ && i++ <= len)
			if (*needle_offset == 0)
				return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}
