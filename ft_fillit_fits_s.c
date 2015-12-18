/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_fits_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:11:37 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:48:42 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	fits_s_flat(char *tab, int pos, char print, int size)
{
	if (tab[pos] == '.' && pos > 0
		&& (pos + size + 1) < (size * size)
		&& size > 2)
		if (tab[pos + 1] == '.'
			&& tab[pos + size - 1] == '.'
			&& tab[pos + size] == '.'
			&& (pos % size)
			&& (pos % size) < (size - 1))
		{
			tab[pos] = print;
			tab[pos + 1] = print;
			tab[pos + size] = print;
			tab[pos + size - 1] = print;
			return (1);
		}
	return (0);
}

int			fits_s(char piece, int *pos, char *tab, char print)
{
	if (piece == S_FLAT)
		return (fits_s_flat(tab, pos[0], print, pos[1]));
	if (piece == S_0)
		if (tab[pos[0]] == '.'
			&& (pos[0] + 1 + (2 * pos[1])) < (pos[1] * pos[1])
			&& pos[1] > 2)
			if (tab[pos[0] + pos[1]] == '.'
				&& tab[pos[0] + pos[1] + 1] == '.'
				&& tab[pos[0] + (pos[1] * 2) + 1] == '.'
				&& (pos[0] % pos[1]) < (pos[1] - 1))
			{
				tab[pos[0]] = print;
				tab[pos[0] + pos[1]] = print;
				tab[pos[0] + pos[1] + 1] = print;
				tab[pos[0] + (pos[1] * 2) + 1] = print;
				return (1);
			}
	return (0);
}
