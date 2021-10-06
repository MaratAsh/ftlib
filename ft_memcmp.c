/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:38:54 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/06 17:21:09 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

int	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	t_size	i;

	i = 0;
	while (((unsigned char *) s1)[i] == ((unsigned char *) s2)[i] && i < n)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
