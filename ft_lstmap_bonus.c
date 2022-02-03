/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:49:18 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/18 20:19:03 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*iterator;
	t_list	*result;
	t_list	*new;
	void	*value;

	if (! lst)
		return (NULL);
	result = NULL;
	iterator = lst;
	while (iterator)
	{
		value = f(iterator->content);
		new = ft_lstnew(value);
		if (!new)
			ft_lstclear(&result, del);
		ft_lstadd_back(&result, new);
		if (!result)
			result = new;
		iterator = iterator->next;
	}
	return (result);
}
