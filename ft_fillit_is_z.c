/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_is_z.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:12:45 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:50:48 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	is_z_0(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 8)
		{
			if (str[i + 5] == '#'
				&& str[i + 4] == '#'
				&& str[i + 9] == '#')
				return (Z_0);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_z_flat(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 11)
		{
			if (str[i + 1] == '#'
				&& str[i + 6] == '#'
				&& str[i + 7] == '#')
				return (Z_FLAT);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

char		is_z(char *piece)
{
	char	enum_piece;

	if ((enum_piece = is_z_0(piece)))
		return (enum_piece);
	if ((enum_piece = is_z_flat(piece)))
		return (enum_piece);
	return (0);
}
