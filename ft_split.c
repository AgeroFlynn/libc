/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:26:29 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/22 12:58:09 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char sep)
{
	int	result;

	result = 0;
	while (*s)
	{
		if (*s++ == sep)
			continue ;
		result++;
		while (*s != sep)
			if (*s++ == 0)
				return (result);
	}
	return (result);
}

static int	ft_word_length(const char *s, char sep)
{
	int	result;

	result = 0;
	while (*s && *s != sep)
	{
		result++;
		s++;
	}
	return (result);
}

static char	**ft_clean(char	**tab, int i)
{
	while (i--)
		free(tab[i]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		length;
	int		i;
	int		offset;

	if (!s)
		return (NULL);
	tab = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	offset = 0;
	while (s[offset])
	{
		if (s[offset++] == c)
			continue ;
		length = ft_word_length(& s[--offset], c);
		tab[i++] = ft_substr(s, offset, length);
		if (!tab[i - 1])
			return (ft_clean(tab, i - 1));
		offset += length;
	}
	tab[i] = 0;
	return (tab);
}
