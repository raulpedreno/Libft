/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:33:34 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/28 10:56:46 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*aux;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		aux = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = aux;
	}
	*lst = NULL;
}
