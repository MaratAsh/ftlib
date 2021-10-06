/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:28:28 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/06 13:55:05 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef unsigned long	t_size;

void	*ft_calloc(t_size count, t_size size)
{
	return ((void *) malloc(count * size));
}
