/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:16:51 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/22 19:34:25 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	size;

	size = ft_strlen((char *)str);
	while (str[size] != (char)c && size != 0)
	{
		size--;
	}
	if (str[size] == (char)c)
		return ((char *)&str[size]);
	return (NULL);
}
