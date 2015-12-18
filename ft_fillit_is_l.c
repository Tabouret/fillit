/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_is_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:12:22 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:50:43 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	is_l_0(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 7)
		{
			if (str[i + 5] == '#'
				&& str[i + 10] == '#'
				&& str[i + 11] == '#')
				return (L_0);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_l_90(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 14)
		{
			if (str[i + 5] == '#'
				&& str[i + 2] == '#'
				&& str[i + 1] == '#')
				return (L_90);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_l_180(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 7)
		{
			if (str[i + 6] == '#'
				&& str[i + 1] == '#'
				&& str[i + 11] == '#')
				return (L_180);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_l_270(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 13)
		{
			if (str[i + 5] == '#'
				&& str[i + 4] == '#'
				&& str[i + 3] == '#')
				return (L_270);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

char		is_l(char *piece)
{
	char	enum_piece;

	if ((enum_piece = is_l_0(piece)))
		return (enum_piece);
	if ((enum_piece = is_l_90(piece)))
		return (enum_piece);
	if ((enum_piece = is_l_180(piece)))
		return (enum_piece);
	if ((enum_piece = is_l_270(piece)))
		return (enum_piece);
	return (0);
}
