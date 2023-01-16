/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 07:43:07 by afavre            #+#    #+#             */
/*   Updated: 2022/10/28 07:53:56 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	res;

	res = 0;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		res++;
		lst = lst->next;
	}
	if (lst->next == NULL)
		res++;
	return (res);
}
