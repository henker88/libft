/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:25:05 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/29 22:06:53 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;

	if (dst == src)
		return (dst);
	a = (char *)dst;
	b = (char *)src;
	while (n--)
	{
		*a = *b;
		a++;
		b++;
	}
	return (dst);
}
