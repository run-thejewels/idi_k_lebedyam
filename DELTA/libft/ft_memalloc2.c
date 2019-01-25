/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:17:39 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/23 19:01:43 by kbethany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	**ft_memalloc2(size_t i, size_t j)
{
	char	**s;
	size_t	k;
	size_t	l;

	k = 0;
	if (!(s = (char **)malloc(sizeof(char *) * (i + 1))) ||
		!(s[k] = (char *)malloc(sizeof(char) * j)))
		return (NULL);
	while (k++ < i)
		if ((s[k] = (char *)malloc(sizeof(char) * j)) == NULL)
			return (NULL);
	k = 0;
	while (k < i)
	{
		l = 0;
		while (l < j)
		{
			s[k][l] = '.';
			l++;
		}
		s[k][l] = '\0';
		k++;
	}
	s[i] = NULL;
	return (s);
}
