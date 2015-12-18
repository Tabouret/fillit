/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:12:51 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:50:55 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print(int size, char *tab)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (tab[i])
	{
		write(1, tab + i, 1);
		if (!(j % size))
			write(1, "\n", 1);
		i++;
		j++;
	}
	exit(0);
}

void	ft_erase(char *tab, int i)
{
	int	j;

	j = 0;
	while (tab[j])
	{
		if (tab[j] >= 'A' + i)
			tab[j] = '.';
		j++;
	}
}
