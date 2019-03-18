/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdynia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:55:45 by mdynia            #+#    #+#             */
/*   Updated: 2017/11/21 21:25:04 by mdynia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	l;

	i = ft_strlen(s1);
	l = 0;
	while (s2[l] != '\0')
	{
		s1[i + l] = s2[l];
		l++;
	}
	s1[i + l] = '\0';
	return (s1);
}
