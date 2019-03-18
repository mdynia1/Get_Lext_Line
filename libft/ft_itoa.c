/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdynia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 20:42:46 by mdynia            #+#    #+#             */
/*   Updated: 2017/11/29 21:01:02 by mdynia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int		k;

	k = 0;
	while (n / 10 != 0)
	{
		k++;
		n = n / 10;
	}
	return (k + 1);
}

static int	ft_put(char *buff, int i, int flag, int n)
{
	if (buff != NULL)
	{
		buff[i] = '\0';
		while (i != -1)
		{
			buff[i - 1] = (n % 10) + '0';
			n = n / 10;
			i--;
		}
		if (flag == 1)
			buff[0] = '-';
		return (1);
	}
	return (0);
}

char		*ft_itoa(int n)
{
	char	*buff;
	int		i;
	int		flag;

	i = ft_length(n);
	flag = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n = -n;
		flag = 1;
		i = i + 1;
	}
	buff = (char *)malloc(sizeof(char) * i + 1);
	if (ft_put(buff, i, flag, n))
	{
		return (buff);
	}
	return (NULL);
}
