/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_is_j.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:12:16 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:50:42 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	is_j_0(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i > 0 && i <= 8)
		{
			if (str[i + 5] == '#'
				&& str[i + 10] == '#'
				&& str[i + 9] == '#')
				return (J_0);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_j_90(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 11)
		{
			if (str[i + 5] == '#'
				&& str[i + 6] == '#'
				&& str[i + 7] == '#')
				return (J_90);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_j_180(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 7)
		{
			if (str[i + 1] == '#'
				&& str[i + 5] == '#'
				&& str[i + 10] == '#')
				return (J_180);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_j_270(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 11)
		{
			if (str[i + 7] == '#'
				&& str[i + 1] == '#'
				&& str[i + 2] == '#')
				return (J_270);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

char		is_j(char *piece)
{
	char	enum_piece;

	if ((enum_piece = is_j_0(piece)))
		return (enum_piece);
	if ((enum_piece = is_j_90(piece)))
		return (enum_piece);
	if ((enum_piece = is_j_180(piece)))
		return (enum_piece);
	if ((enum_piece = is_j_270(piece)))
		return (enum_piece);
	return (0);
}
