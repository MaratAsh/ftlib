/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:41:15 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/06 16:40:04 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

static void	*ft_memset(void *b, int c, t_size len)
{
	unsigned char	*temp;

	temp = (unsigned char *) b;
	while (len)
	{
		temp[len - 1] = (unsigned char) c;
		len--;
	}
	return (b);
}

void	ft_bzero(void *s, t_size n)
{
	ft_memset(s, 0, n);
}
