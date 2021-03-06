/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:41:35 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/22 18:33:09 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (2);
	if (arg >= 'A' && arg <= 'Z')
		return (1);
	return (0);
}
