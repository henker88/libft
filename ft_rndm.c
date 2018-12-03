/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rndm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 21:10:45 by sgendry           #+#    #+#             */
/*   Updated: 2018/12/03 21:45:09 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		*ft_rndm(int c)
{
	int *mem;

	(void)c;
	mem = (int *)malloc(sizeof(int *));
	if (mem == 0)
		return (0);
	return (mem);
}

int main (void)
{
	printf("%p", ft_rndm(23));
}
