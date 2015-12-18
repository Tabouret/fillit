/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_solve.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:12:59 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:51:59 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	fits(char piece, int *pos, char *tab, char print)
{
	if (piece >= J_0 && piece <= J_270)
		return (fits_j(piece, pos, tab, print));
	if (piece == S_0 || piece == S_FLAT)
		return (fits_s(piece, pos, tab, print));
	if (piece == Z_0 || piece == Z_FLAT)
		return (fits_z(piece, pos, tab, print));
	if (piece >= L_0 && piece <= L_270)
		return (fits_l(piece, pos, tab, print));
	if (piece == O_0)
		return (fits_o(piece, pos, tab, print));
	if (piece >= T_0 && piece <= T_270)
		return (fits_t(piece, pos, tab, print));
	if (piece == I_0 || piece == I_FLAT)
		return (fits_i(piece, pos, tab, print));
	return (0);
}

static void	solve_rec(char *pieces, int i, char *tab, int side)
{
	int	pos[2];

	pos[0] = 0;
	pos[1] = side;
	if (pieces[i])
		while (pos[0] <= ((side * side) - 4))
		{
			if (fits(pieces[i], pos, tab, 'A' + i))
				solve_rec(pieces, i + 1, tab, side);
			pos[0]++;
			ft_erase(tab, i);
			while (tab[pos[0]] && tab[pos[0]] != '.')
				pos[0]++;
		}
	else
		ft_print(side, tab);
}

void		ft_solve(char *pieces)
{
	int		os;
	char	*tab;

	os = 0;
	while (os < 11)
	{
		tab = ft_alloc(ft_strlen(pieces), os);
		solve_rec(pieces, 0, tab, tab[ft_strlen(tab) + 1]);
		free(tab);
		os++;
	}
}
