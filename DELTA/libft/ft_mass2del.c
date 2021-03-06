/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mass2del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 20:59:51 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/01/22 21:09:24 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_mass2del(char **a)
{
	int i;

	i = 0;
	while (a[i] != NULL)
	{
		free(a[i]);
		a[i] = NULL;
		i++;
	}
	free(a[i]);
	a[i] = NULL;
	free(a);
	a = NULL;
}
