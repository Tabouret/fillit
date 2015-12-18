/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 07:30:56 by pollier           #+#    #+#             */
/*   Updated: 2015/12/15 07:34:35 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

enum	e_const
{
	FORMES,

	S_0,
	S_FLAT,

	Z_0,
	Z_FLAT,

	L_0,
	L_90,
	L_180,
	L_270,

	J_0,
	J_90,
	J_180,
	J_270,

	T_0,
	T_90,
	T_180,
	T_270,

	O_0,

	I_0,
	I_FLAT

};

/*
**	Fonctions pour les formes
*/
char	is_t(char *piece);
char	is_l(char *piece);
char	is_j(char *piece);
char	is_s(char *piece);
char	is_z(char *piece);
char	is_i(char *piece);
char	is_o(char *piece);
/*
**	Fonctions pour les formes
*/
int		fits_i(char piece, int pos[3], char *tab, char print);
int		fits_j(char piece, int pos[3], char *tab, char print);
int		fits_l(char piece, int pos[3], char *tab, char print);
int		fits_s(char piece, int pos[3], char *tab, char print);
int		fits_t(char piece, int pos[3], char *tab, char print);
int		fits_z(char piece, int pos[3], char *tab, char print);
int		fits_o(char piece, int pos[3], char *tab, char print);
void	ft_parse(char *str);
void	ft_solve(char *pieces);
void	ft_error(void);
void	ft_erase(char *tab, int i);
void	ft_print(int size, char *tab);
size_t	tab_size(char *pieces);
char	*ft_alloc(size_t len, size_t offset);
size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);

#endif
