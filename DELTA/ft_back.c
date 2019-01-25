/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbethany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 18:50:52 by kbethany          #+#    #+#             */
/*   Updated: 2019/01/23 18:51:46 by kbethany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_back(int **map)
{
	int		i;
	int		j;
	int		flag;

	i = 0;
	flag = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (map[i][j] >= map[i][9] && map[i][j + 4] >= map[i][10])
			{
				map[i][j] = map[i][j] - map[i][9];
				map[i][j + 4] = map[i][j + 4] - map[i][10];
			}
			j++;
		}
		map[i][9] = 0;
		map[i][10] = 0;
		i++;
	}
}
