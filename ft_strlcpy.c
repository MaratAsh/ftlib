/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:04:22 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/06 13:17:50 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

t_size	ft_strlcpy(char *dst, const char *src, t_size sz)
{
	t_size	i;

	i = 0;
	while (src[i] && i < sz)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (i);
}
