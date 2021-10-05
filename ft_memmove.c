/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:53:27 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/05 16:54:37 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memmove(void *dst, const void *src, size_t len)
{
	void		*temp_dst;
	const void	*temp_src;

	temp_dst = dst;
	temp_src = src;
	if (dst < src)
	{
		while (len)
		{
			*temp_dst++ = *temp_src++;
			len--;
		}
	}
	else
	{
		temp_dst += len - 1;
		temp_src += len - 1;
		while (len)
		{
			*temp_dst-- = *temp_src--;
			len--;
		}
	}
	return (dst);
}
