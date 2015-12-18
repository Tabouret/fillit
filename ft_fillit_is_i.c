/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_is_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:12:07 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:50:40 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	is_i_flat(char *piece)
{
	int	i;

	i = 0;
	while (piece[i])
	{
		if (piece[i] == '#' && i <= 15)
		{
			if (piece[i + 1] == '#'
				&& piece[i + 2] == '#'
				&& piece[i + 3] == '#')
				return (I_FLAT);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

char		is_i(char *piece)
{
	char	enum_piece;
	int		i;

	i = 0;
	if ((enum_piece = is_i_flat(piece)))
		return (enum_piece);
	else
	{
		while (piece[i])
		{
			if (piece[i] == '#' && i <= 3)
			{
				if (piece[i + 5] == '#'
					&& piece[i + 10] == '#'
					&& piece[i + 15] == '#')
					return (I_0);
				else
					return (0);
			}
			i++;
		}
	}
	return (0);
}
