/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:43:07 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/22 19:15:40 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t counter)
{
	size_t			i;
	unsigned char	*strdest;
	unsigned char	*strsrc;

	strdest = (unsigned char *)dest;
	strsrc = (unsigned char *)src;
	i = 0;
	if (!strdest && !strsrc)
		return (NULL);
	if (strdest > strsrc)
	{
		counter++;
		while (--counter > 0)
			(strdest)[counter - 1] = (strsrc)[counter - 1];
	}
	else
	{
		while (i < counter)
		{
			(strdest)[i] = (strsrc)[i];
			i++;
		}
	}
	return (dest);
}
