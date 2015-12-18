/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_is_t.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:12:39 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:50:47 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	is_t_0(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 12)
		{
			if (str[i + 4] == '#'
				&& str[i + 5] == '#'
				&& str[i + 6] == '#')
				return (T_0);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_t_90(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 7)
		{
			if (str[i + 5] == '#'
				&& str[i + 10] == '#'
				&& str[i + 6] == '#')
				return (T_90);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_t_180(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i <= 11)
		{
			if (str[i + 1] == '#'
				&& str[i + 2] == '#'
				&& str[i + 6] == '#')
				return (T_180);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

static char	is_t_270(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '#' && i > 0 && i <= 8)
		{
			if (str[i + 4] == '#'
				&& str[i + 5] == '#'
				&& str[i + 10] == '#')
				return (T_270);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

char		is_t(char *piece)
{
	char	enum_piece;

	if ((enum_piece = is_t_0(piece)))
		return (enum_piece);
	if ((enum_piece = is_t_90(piece)))
		return (enum_piece);
	if ((enum_piece = is_t_180(piece)))
		return (enum_piece);
	if ((enum_piece = is_t_270(piece)))
		return (enum_piece);
	return (0);
}
