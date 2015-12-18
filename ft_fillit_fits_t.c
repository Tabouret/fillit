/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_fits_t.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:11:44 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:50:15 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	fits_t_0(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& pos > 0
		&& (pos + size + 2) < (size * size)
		&& size > 2)
	{
		if (tab[pos + size - 1] == '.'
			&& tab[pos + size] == '.'
			&& tab[pos + size + 1] == '.'
			&& (pos % size) < (size - 1)
			&& (pos % size))
		{
			tab[pos] = print;
			tab[pos + size - 1] = print;
			tab[pos + size] = print;
			tab[pos + size + 1] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_t_90(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& (pos + (2 * size)) < (size * size)
		&& size > 2)
	{
		if (tab[pos + size] == '.'
			&& tab[pos + size + 1] == '.'
			&& tab[pos + (size * 2)] == '.'
			&& (pos % size) < (size - 1))
		{
			tab[pos] = print;
			tab[pos + size] = print;
			tab[pos + size + 1] = print;
			tab[pos + size * 2] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_t_180(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& (pos + size + 2) < (size * size)
		&& size > 2)
	{
		if (tab[pos + 1] == '.'
			&& tab[pos + 2] == '.'
			&& tab[pos + size + 1] == '.'
			&& ((pos % size) < (size - 2)))
		{
			tab[pos] = print;
			tab[pos + 1] = print;
			tab[pos + size + 1] = print;
			tab[pos + 2] = print;
			return (1);
		}
	}
	return (0);
}

static int	fits_t_270(char *tab, char print, int size, int pos)
{
	if (tab[pos] == '.'
		&& pos
		&& (pos + (size * 2) < (size * size))
		&& size > 2)
	{
		if (tab[pos + size - 1] == '.'
			&& tab[pos + size] == '.'
			&& tab[pos + (size * 2)] == '.'
			&& (pos % size))
		{
			tab[pos] = print;
			tab[pos + size - 1] = print;
			tab[pos + size] = print;
			tab[pos + (size * 2)] = print;
			return (1);
		}
	}
	return (0);
}

int			fits_t(char piece, int *pos, char *tab, char print)
{
	if (piece == T_0)
		return (fits_t_0(tab, print, pos[1], pos[0]));
	if (piece == T_90)
		return (fits_t_90(tab, print, pos[1], pos[0]));
	if (piece == T_180)
		return (fits_t_180(tab, print, pos[1], pos[0]));
	if (piece == T_270)
		return (fits_t_270(tab, print, pos[1], pos[0]));
	return (0);
}
