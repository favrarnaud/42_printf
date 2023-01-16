/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:31:36 by afavre            #+#    #+#             */
/*   Updated: 2022/10/26 11:20:34 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	k;

	str = (char *)s;
	k = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == k)
			return (&str[i]);
		i--;
	}
	return (0);
}
