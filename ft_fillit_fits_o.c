/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_fits_o.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:11:30 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:46:58 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	fits_o(char piece, int *pos, char *tab, char print)
{
	if (piece == O_0)
		if (tab[pos[0]] == '.' && (pos[0] + pos[1] + 1) < (pos[1] * pos[1]))
		{
			if (tab[pos[0] + 1] == '.'
				&& tab[pos[0] + pos[1]] == '.'
				&& tab[pos[0] + pos[1] + 1] == '.'
				&& ((pos[0] % pos[1]) < (pos[1] - 1)))
			{
				tab[pos[0]] = print;
				tab[pos[0] + 1] = print;
				tab[pos[0] + pos[1]] = print;
				tab[pos[0] + pos[1] + 1] = print;
				return (1);
			}
		}
	return (0);
}
