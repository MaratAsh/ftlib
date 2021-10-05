/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:24:05 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/05 16:35:10 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t sz)
{
	int	sz_dst;
	int	i;

	i = 0;
	sz_dst = 0;
	while (dst[sz_dst])
		sz_dst++;
	while (src[i])
	{
		dst[sz_dst + i] = src[i];
		i++;
	}
	dst[sz_dst + i] = 0;
	return ((size_t) sz_dst + i);
}
