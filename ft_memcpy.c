/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:02:05 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/08 18:43:52 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*ump;

	i = 0;
	tmp = (unsigned char *)dest;
	ump = (unsigned char *)src;
	while (i < n)
	{
		tmp[i] = ump[i];
		i++;
	}
	return (dest);
}
