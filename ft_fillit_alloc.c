/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:10:54 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/11 21:10:57 by elacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_fill_dot(char *str, size_t size)
{
	while (size--)
	{
		*str = '.';
		str++;
	}
}

static size_t	ft_square(size_t surface)
{
	size_t	i;

	i = 2;
	while ((i * i) < surface)
	{
		i++;
	}
	return (i);
}

char			*ft_alloc(size_t len, size_t offset)
{
	size_t		side;
	char		*alocate;

	side = ft_square(len * 4);
	side += offset;
	alocate = ft_strnew((side * side) + 3);
	alocate[(side * side) + 1] = 0;
	alocate[(side * side) + 1] += side;
	alocate[(side * side) + 2] = 0;
	ft_fill_dot(alocate, side * side);
	return (alocate);
}
