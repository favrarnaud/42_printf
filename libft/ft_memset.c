/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:38:49 by afavre            #+#    #+#             */
/*   Updated: 2022/10/25 17:56:11 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int c, size_t size)
{
	char	*str;
	size_t	i;

	str = mem;
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
