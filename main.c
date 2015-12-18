/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:13:10 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:52:13 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	ft_read_to_piece(char *piece)
{
	char	enum_piece;

	if ((is_o(piece)))
		return (O_0);
	if ((enum_piece = is_t(piece)))
		return (enum_piece);
	if ((enum_piece = is_l(piece)))
		return (enum_piece);
	if ((enum_piece = is_j(piece)))
		return (enum_piece);
	if ((enum_piece = is_s(piece)))
		return (enum_piece);
	if ((enum_piece = is_z(piece)))
		return (enum_piece);
	if ((enum_piece = is_i(piece)))
		return (enum_piece);
	return (0);
}

static void	ft_is_valid(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			ft_error();
		if (str[i] == '\n'
			&& i != 4
			&& i != 9
			&& i != 14
			&& i != 19)
			ft_error();
		if (str[i] == '#')
			check++;
		i++;
	}
	if (check != 4)
		ft_error();
}

void		ft_parse(char *str)
{
	char	*pieces;
	char	*buff;
	int		fd;
	int		i;

	i = 0;
	fd = open(str, O_RDONLY);
	buff = ft_strnew(20);
	pieces = ft_strnew(26);
	if (!(read(fd, buff, 0) == 0))
		ft_error();
	while ((read(fd, buff, 20)) == 20)
	{
		buff[20] = '\0';
		ft_is_valid(buff);
		pieces[i] = ft_read_to_piece(buff);
		i++;
		if (i > 26 || pieces[i - 1] == 0)
			ft_error();
		if (!(read(fd, buff, 1)))
			ft_solve(pieces);
		ft_bzero(buff, 20);
	}
	ft_error();
}

void		ft_error(void)
{
	write(1, "error\n", 6);
	exit(0);
}

int			main(int ac, char **av)
{
	if (ac == 2 && av[1])
	{
		ft_parse(av[1]);
	}
	else
		ft_error();
	return (0);
}
