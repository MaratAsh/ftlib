/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:45:39 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/06 13:21:41 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	if (s[i])
		return ((char *)s + i);
	return ((void *) 0);
}
