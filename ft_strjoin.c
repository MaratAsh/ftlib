/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:22:04 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/08 16:37:20 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len1;
	int		len2;

	len1 = ft_strlen((char *) s1);
	len2 = ft_strlen((char *) s2);
	str = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == (char *) 0)
		return (NULL);
	ft_strlcpy(str, s1, len1);
	ft_strlcpy(str + len1, s2, len2 + 1);
	return (str);
}
