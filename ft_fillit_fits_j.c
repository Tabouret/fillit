/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_fits_j.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:11:16 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:46:05 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	fits_j_0(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& pos > 0
		&& pos <= (size * size) - (2 * size)
		&& size > 2)
	{
		if (tab[pos + size] == '.'
			&& tab[pos + (size * 2)] == '.'
			&& tab[pos + (size * 2) - 1] == '.'
			&& (((pos - 1) / size) == (pos / size)))
		{
			tab[pos] = print;
			tab[pos + size] = print;
			tab[pos + (size * 2)] = print;
			tab[pos + (size * 2) - 1] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_j_90(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& (pos + size + 2) < (size * size)
		&& size > 2)
	{
		if (tab[pos + size] == '.'
			&& tab[pos + size + 1] == '.'
			&& tab[pos + size + 2] == '.'
			&& (pos % size) < (size - 2))
		{
			tab[pos] = print;
			tab[pos + size] = print;
			tab[pos + size + 1] = print;
			tab[pos + size + 2] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_j_180(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& pos > 0
		&& pos <= (size * size) - ((2 * size))
		&& size > 2)
	{
		if (tab[pos + 1] == '.'
			&& tab[pos + size] == '.'
			&& tab[pos + (size * 2)] == '.'
			&& (((pos + 1) / size) == (pos / size)))
		{
			tab[pos] = print;
			tab[pos + 1] = print;
			tab[pos + size] = print;
			tab[pos + (size * 2)] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_j_270(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& pos <= (size * size) - size - 2
		&& size > 2)
	{
		if (tab[pos + size + 2] == '.'
			&& tab[pos + 1] == '.'
			&& tab[pos + 2] == '.'
			&& (((pos + 2) / size) == (pos / size)))
		{
			tab[pos] = print;
			tab[pos + size + 2] = print;
			tab[pos + 1] = print;
			tab[pos + 2] = print;
			return (1);
		}
	}
	return (0);
}

int			fits_j(char piece, int *pos, char *tab, char print)
{
	if (piece == J_0)
		return (fits_j_0(tab, print, pos[1], pos[0]));
	if (piece == J_90)
		return (fits_j_90(tab, print, pos[1], pos[0]));
	if (piece == J_180)
		return (fits_j_180(tab, print, pos[1], pos[0]));
	if (piece == J_270)
		return (fits_j_270(tab, print, pos[1], pos[0]));
	return (0);
}
