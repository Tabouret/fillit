/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_fits_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:11:08 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:45:17 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	fits_i_flat(char *tab, int pos, char print, int size)
{
	if (tab[pos] == '.'
		&& pos <= (size * size) - 4
		&& size > 3)
		if (tab[pos + 1] == '.'
			&& tab[pos + 2] == '.'
			&& tab[pos + 3] == '.'
			&& (pos % size) <= (size - 4))
		{
			tab[pos] = print;
			tab[pos + 1] = print;
			tab[pos + 2] = print;
			tab[pos + 3] = print;
			return (1);
		}
	return (0);
}

int			fits_i(char piece, int *pos, char *tab, char print)
{
	if (piece == I_FLAT)
		return (fits_i_flat(tab, pos[0], print, pos[1]));
	if (tab[pos[0]] == '.'
		&& (pos[0] + (3 * pos[1])) < (pos[1] * pos[1])
			&& pos[1] > 3)
		if (tab[pos[0] + pos[1]] == '.'
			&& tab[pos[0] + (pos[1] * 2)] == '.'
			&& tab[pos[0] + (pos[1] * 3)] == '.')
		{
			tab[pos[0]] = print;
			tab[pos[0] + pos[1]] = print;
			tab[pos[0] + (pos[1] * 2)] = print;
			tab[pos[0] + (pos[1] * 3)] = print;
			return (1);
		}
	return (0);
}
