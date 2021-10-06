/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:16:27 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/06 17:11:23 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

void	*ft_memchr(const char *s, int c, t_size n)
{
	t_size	i;

	i = 0;
	if ((unsigned char) c == 0 && s[n - 1] == '\0')
		return ((char *) s + n - 1);
	while (i < n)
	{
		if (s[i] == c)
			return ((char *) s + i);
		i++;
	}
	return ((void *) 0);
}
