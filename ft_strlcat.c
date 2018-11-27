/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:54:45 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/27 20:51:14 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ddst;
	size_t	dsrc;

	ddst = 0;
	dsrc = ft_strlen(src);
	while (*dst && size)
	{
		dst++;
		ddst++;
		size--;
	}
	while (size-- > 1)
	{
		*dst++ = *src++;
		if (size == 1 || !*src)
			*dst = '\0';
	}
	return (ddst + dsrc);
}
