/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:45:00 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/05 18:00:01 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while(haystack[i] && i < len)
	{
		if (haystack[i] == needle[0] && i + j < len)
		{
			j = 0;
			while(haystack[i + j] == needle[j] && needle[j] != 0)
				j++;
			if (needle[j] == 0)
				return (haystack);
		}
		i++;
	}
	return ((void *) 0);
}
