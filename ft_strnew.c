/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:56:54 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/28 21:37:34 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;

	mem = (char *)malloc(size + 1);
	if (mem == 0)
		return (NULL);
	ft_bzero((void *)mem, size + 1);
	return ((void *)mem);
}
