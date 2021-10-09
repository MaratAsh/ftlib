/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:24:05 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/09 21:49:27 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned long	t_size;

t_size	ft_strlcat(char *dst, const char *src, t_size sz)
{
	t_size	sz_dst;
	t_size	i;

	i = 0;
	sz_dst = 0;
	while (dst[sz_dst])
		sz_dst++;
	if (sz_dst >= sz)
		return (ft_strlen((char *) src) + sz);
	while (src[i] && sz_dst + i + 1 < sz)
	{
		dst[sz_dst + i] = src[i];
		i++;
	}
	if (sz_dst + i == sz && sz != 0)
		i--;
	dst[sz_dst + i] = 0;
	return (sz_dst + i);
}
