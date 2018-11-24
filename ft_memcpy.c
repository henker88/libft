/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:25:05 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/23 22:11:42 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *a;

	a = (char *)dst;
	while (*a && n--)
	{
		*a = *((char *)src);
		src++;
		//src = ((char *)src) + 1;
		a++;
	}
	return (dst);
}

int main(void)
{
	char k1[] = "test1";
	char k2[] = "sdsd";
	printf ("%s", ft_memcpy(k1, k2, 2));
}
