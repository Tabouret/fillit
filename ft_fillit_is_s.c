/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_is_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:12:34 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:50:45 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	is_s_0(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 7)
		{
			if (str[i + 5] == '#'
				&& str[i + 6] == '#'
				&& str[i + 11] == '#')
				return (S_0);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_s_flat(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 12)
		{
			if (str[i + 1] == '#'
				&& str[i + 4] == '#'
				&& str[i + 5] == '#')
				return (S_FLAT);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

char		is_s(char *piece)
{
	char	enum_piece;

	if ((enum_piece = is_s_0(piece)))
		return (enum_piece);
	if ((enum_piece = is_s_flat(piece)))
		return (enum_piece);
	return (0);
}
