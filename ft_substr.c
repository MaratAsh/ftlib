/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:58:34 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/08 16:21:43 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef unsigned long	t_size;

char	*ft_substr(char const *s, unsigned int start, t_size len)
{
	t_size	fact_len;
	char	*str;
	t_size	i;
	
	fact_len = ft_strlen((char *) s);
	if (fact_len < start)
	{
		str = malloc(1);
		if (str)
			str[0] = 0;
		return (str);
	}
	else
	{
		fact_len = fact_len - start + 1;
		if (fact_len > len)
			fact_len = len;
		str = (char *) malloc(sizeof(char) * (fact_len + 1));
		if (str == (char *) 0)
			return (NULL);
		i = 0;
		while (i < fact_len)
		{
			str[i] = s[i + start];
			i++;
		}
		str[i] = 0;
		return (str);
	}
}