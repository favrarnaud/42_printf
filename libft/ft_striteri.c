/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:33:56 by afavre            #+#    #+#             */
/*   Updated: 2022/10/26 12:45:10 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	if (s != NULL && f != NULL)
	{
		while (i < len)
		{
			(f)(i, &s[i]);
			i++;
		}
	}
}
