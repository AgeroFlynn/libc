/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:34:02 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/22 12:56:54 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strrev(char *s)
{
	int		len;
	int		i;
	char	temp;

	len = ft_strlen((const char *)s);
	i = 0;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}

static void	ft_buff_init(char *buff, int n)
{
	int				i;
	int				flag;
	unsigned int	norm;

	flag = 0;
	i = 0;
	if (n < 0)
	{
		flag = 1;
		norm = -1 * n;
	}
	else
		norm = n;
	if (!norm)
		buff[i++] = '0';
	while (norm)
	{
		buff[i++] = norm % 10 + '0';
		norm /= 10;
	}
	if (flag)
		buff[i++] = '-';
	buff[i] = 0;
}

char	*ft_itoa(int n)
{
	char			buff[128];
	char			*result;
	size_t			len;

	ft_buff_init(&buff[0], n);
	len = ft_strlen((const char *) &buff[0]);
	result = malloc(sizeof(char) * (len + 1));
	if (! result)
		return (NULL);
	ft_strlcpy(result, (const char *)&buff[0], len + 1);
	ft_strrev(result);
	return (result);
}
