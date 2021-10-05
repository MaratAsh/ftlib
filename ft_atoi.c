/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:31:12 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/05 19:39:41 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	res;
	int	flg;

	flg = 0;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f')
		str++;
	if (*str == '-')
	{
		str++;
		flg = 1;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (flg)
			res = res * 10 - (*str - '0');
		else
			res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}
