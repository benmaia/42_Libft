/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:43:11 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/22 18:51:40 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t count)
{
	char	*dest;

	dest = (char *)str;
	while (0 < count)
	{
		dest[count - 1] = c;
		count--;
	}
	return (str);
}
