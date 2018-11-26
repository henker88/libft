/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:06:28 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/24 19:06:24 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	while (haystack[i])
	{
		k = i;
		j = 0;
		while (haystack[k] == needle[j])
		{
			k++;
			j++;
			if (needle[j])
				return (((char)needle));
		}
		if (needle[j] == 0)
			return (((char)haystack));
	}
	return (0);
}

int main  (void)
{
	char k[] = "test";
	char l[] = "st";
	printf ("%s",ft_strstr(k, l));
	printf ("%s", strstr(k, l));
}
