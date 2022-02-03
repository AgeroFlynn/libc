/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbernard <wbernard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:02:42 by wbernard          #+#    #+#             */
/*   Updated: 2021/10/18 18:45:43 by wbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;
	t_list	*iterator;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	iterator = *lst;
	while (iterator->next)
		iterator = iterator->next;
	current = new;
	iterator->next = current;
}
