/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:24:05 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/06 13:18:25 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

t_size	ft_strlcat(char *dst, const char *src, t_size sz)
{
	t_size	sz_dst;
	t_size	i;

	i = 0;
	sz_dst = 0;
	while (dst[sz_dst])
		sz_dst++;
	while (src[i] && i < sz)
	{
		dst[sz_dst + i] = src[i];
		i++;
	}
	dst[sz_dst + i] = 0;
	return (sz_dst + i);
}
