/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:04:22 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/09 20:46:10 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size sz)
{
	t_size	i;

	i = 0;
	if (sz == 0)
		return (ft_strlen((char *) src));
	while (src[i])
	{
		if (i == sz - 1)
			break ;
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen((char *) src));
}
