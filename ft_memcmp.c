/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:38:54 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/10 16:05:20 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long	t_size;

int	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	t_size	i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	s1_ = (unsigned char *) s1;
	s2_ = (unsigned char *) s2;
	i = 0;
	if (s1_ == 0 && s2_ == 0)
		return (0);
	while (s1_[i] == s2_[i] && i < n)
		i++;
	if (i >= n)
		return (s1_[i - 1] - s2_[i - 1]);
	return (s1_[i] - s2_[i]);
}
