/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:23:59 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/18 17:31:01 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*result;
	const char	*start;
	const char	*end;
	size_t		size;

	if (!s1 || !set)
		return (NULL);
	if (!*set)
		return (ft_strdup(s1));
	start = s1;
	while (ft_strchr(set, (int) *start) && *start)
		start++;
	if (! *start)
		return (ft_strdup(""));
	end = s1 + ft_strlen(s1) - 1;
	while (ft_strchr(set, (int) *end))
		end--;
	size = ++end - start + 1;
	result = (char *) malloc(size);
	if (!result)
		return (NULL);
	ft_strlcpy(result, start, size);
	return (result);
}
