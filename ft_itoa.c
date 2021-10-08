/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:51:51 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/08 21:30:04 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_digits(int num)
{
	if (num < 0)
		return (1 + ft_get_digits(-(num / 10)));
	else
	{
		if (num / 10 == 0)
			return (1);
		return (1 + ft_get_digits(num / 10));
	}
}

static void	ft_fill(char *str, int num)
{
	if (num < 0)
		*str = '0' - num % 10;
	else
		*str = '0' + num % 10;
	if (num / 10 != 0)
		ft_fill(str - 1, num / 10);
	else if (num < 0)
		*(str - 1) = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		d;

	d = ft_get_digits(n);
	if (n < 0)
	{
		str = (char *) malloc(sizeof(char) * (d + 2));
		if (str == NULL)
			return (NULL);
		ft_fill(str + d, n);
		str[d + 1] = 0;
	}
	else
	{
		str = (char *) malloc(sizeof(char) * (d + 1));
		if (str == NULL)
			return (NULL);
		ft_fill(str + d - 1, n);
		str[d] = 0;
	}
	return (str);
}

