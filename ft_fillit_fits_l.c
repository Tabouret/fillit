/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_fits_l.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:11:24 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:46:52 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	fits_l_0(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& (pos + 1 + (2 * size)) < (size * size)
		&& size > 2)
	{
		if (tab[pos + size] == '.'
			&& tab[pos + (size * 2)] == '.'
			&& tab[pos + (size * 2) + 1] == '.'
			&& (pos % size) < (size - 1))
		{
			tab[pos] = print;
			tab[pos + size] = print;
			tab[pos + (size * 2)] = print;
			tab[pos + (size * 2) + 1] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_l_90(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& (pos + size + 2) < (size * size)
		&& size > 2)
	{
		if (tab[pos + size] == '.'
			&& tab[pos + 1] == '.'
			&& tab[pos + 2] == '.'
			&& ((pos % size) < (size - 2)))
		{
			tab[pos] = print;
			tab[pos + size] = print;
			tab[pos + 1] = print;
			tab[pos + 2] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_l_180(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& (pos + 1 + (2 * size)) < (size * size)
		&& size > 2)
	{
		if (tab[pos + 1] == '.'
			&& tab[pos + size + 1] == '.'
			&& tab[pos + (size * 2) + 1] == '.'
			&& (pos % size) < (size - 1))
		{
			tab[pos] = print;
			tab[pos + 1] = print;
			tab[pos + size + 1] = print;
			tab[pos + (size * 2) + 1] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_l_270(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& (pos + size) < (size * size)
		&& size > 2)
	{
		if (tab[pos + size] == '.'
			&& tab[pos + size - 1] == '.'
			&& tab[pos + size - 2] == '.'
			&& (pos % size) > 1)
		{
			tab[pos] = print;
			tab[pos + size] = print;
			tab[pos + size - 1] = print;
			tab[pos + size - 2] = print;
			return (1);
		}
	}
	return (0);
}

int			fits_l(char piece, int *pos, char *tab, char print)
{
	if (piece == L_0)
		return (fits_l_0(tab, print, pos[1], pos[0]));
	if (piece == L_90)
		return (fits_l_90(tab, print, pos[1], pos[0]));
	if (piece == L_180)
		return (fits_l_180(tab, print, pos[1], pos[0]));
	if (piece == L_270)
		return (fits_l_270(tab, print, pos[1], pos[0]));
	return (0);
}
