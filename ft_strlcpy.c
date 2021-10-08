/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:04:22 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/08 15:25:58 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

t_size	ft_strlcpy(char *dst, const char *src, t_size sz)
{
	t_size	i;

	i = 0;
	while (src[i])
	{
		if (i == sz)
			break;
		dst[i] = src[i];
		i++;
	}
	if ((i > 0 && i < sz) || (src[i] == 0 && i < sz))
		dst[i] = 0;
	return (i);
}
