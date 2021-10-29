/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:42:52 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/22 18:49:04 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t counter)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	s = (unsigned char *)str;
	ch = (unsigned char)c;
	i = 0;
	while (i < counter)
	{
		if (*s == ch)
		{
			return (s);
		}
		i++;
		s++;
	}
	return (NULL);
}
