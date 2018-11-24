/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:06:34 by sgendry           #+#    #+#             */
/*   Updated: 2018/11/23 15:38:03 by sgendry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	int i;
	char *string;
	char *st;

	i = 0;
	st = 0;
	while (s1[i])
		i++;
	string = (char *) malloc(sizeof(char) * i + 1);
	ft_strcpy(string, s1);
	return (string);
}
