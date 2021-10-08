/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcierra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:50:34 by alcierra          #+#    #+#             */
/*   Updated: 2021/10/08 19:50:13 by alcierra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size	ft_size_part(char *s, char c)
{
	t_size	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	return (i);
}

static int	ft_splited_cnt(char const *s, char c)
{
	int	i;
	int	count;
	int	is_last_c;

	i = 0;
	count = 0;
	is_last_c = 1;
	while (s[i])
	{
		if (s[i] == c)
			is_last_c = 1;
		else
		{
			if (is_last_c == 1)
				count++;
			is_last_c = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_str;
	int		i;
	int		count_word;
	t_size	word_len;
	t_size	displmnt;
	t_size	str_len;

	count_word = ft_splited_cnt(s, c);
	arr_str = (char **) malloc(sizeof(char *) * (count_word + 1));
	if (arr_str == (char **) 0)
		return (NULL);
	str_len = ft_strlen((char *) s);
	displmnt = 0;
	i = 0;
	while (i < count_word)
	{
		word_len = ft_size_part((char *) s + displmnt, c);
		arr_str[i] = malloc(sizeof(char) * (word_len + 1));
		if (arr_str[i] == NULL)
		{
			while(i--)
				free(arr_str[i]);
			free(arr_str);
			return (NULL);
		}
		ft_strlcpy(arr_str[i], s + displmnt, word_len + 1);
		displmnt += word_len + 1;
		while (*(s + displmnt) == c)
			displmnt++;
		i++;
	}
	arr_str[i] = NULL;
	return (arr_str);
}
