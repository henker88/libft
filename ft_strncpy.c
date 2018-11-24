/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:44:25 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/23 16:38:31 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	char *a;
	a = dst;
	while (*src && len--)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (a);
}

int main(void)
{
	char k[100] = "te";
	char k2[100] = "te";
	printf("%s\n", ft_strncpy(k, "kick", 3));
	printf("%s", strncpy(k2, "kick", 3));
}
