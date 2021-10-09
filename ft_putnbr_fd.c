/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:00:00 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/09 13:10:09 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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

static int	ft_pow(int num, int power)
{
	int	res;

	res = 1;
	while (power--)
		res *= num;
	return (res);
}

void ft_putnbr_fd(int n, int fd)
{
	int		d;
	int		curr_d;
	char	c;

	curr_d = ft_get_digits(n);
	d = curr_d;
	if (n < 0)
	{
		write(fd, "-", 1);
		c = '0' - n / ft_pow(10, curr_d - 1);
		write(fd, &c, 1);
		n = - (n % ft_pow(10, curr_d - 1));
		curr_d = ft_get_digits(n);
		while (curr_d < d - 1)
		{
			write(fd, "0", 1);
			d--;
		}
	}
	while (curr_d > 1 || (n > 0))
	{
		c = '0' + n / ft_pow(10, curr_d - 1);
		n = n % ft_pow(10, curr_d - 1);
		write(fd, &c, 1);
		d = curr_d;
		curr_d = ft_get_digits(n);
		while (curr_d < d - 1)
		{
			write(fd, "0", 1);
			d--;
		}
	}

}
