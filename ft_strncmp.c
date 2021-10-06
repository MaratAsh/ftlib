/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:07:16 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/06 18:19:43 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

int	ft_strncmp(const char *str1, const char *str2, t_size n)
{
	t_size	i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] != 0)
		i++;
	return (s1[i] - s2[i]);
}
