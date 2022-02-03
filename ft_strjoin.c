/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:03:02 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/22 12:58:36 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	char	*work;
	int		result_size;

	if (!s1 || !s2)
		return (NULL);
	result_size = ft_strlen(s1) + ft_strlen(s2);
	result = (char *) malloc (result_size + 1);
	if (!result)
		return (NULL);
	work = result;
	if (s1)
		while (*s1)
			*work++ = *s1++;
	if (s2)
		while (*s2)
			*work++ = *s2++;
	*work = 0;
	return (result);
}
