/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:51:53 by afavre            #+#    #+#             */
/*   Updated: 2022/10/26 09:53:00 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = dst;
	i = 0;
	if (dst == (void *)0 && src == (void *)0)
		return (NULL);
	while (i < n)
	{
		*s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dst);
}
