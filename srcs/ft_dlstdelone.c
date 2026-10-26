/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagha <nagha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:53:01 by nagha             #+#    #+#             */
/*   Updated: 2025/01/13 13:12:59 by nagha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_dlstdelone(t_dlist *lst, void (*del)(int))
{
	if (!lst)
		return ;
	if (lst)
	{
		if (del)
			del(lst->content);
		free(lst);
	}
}
