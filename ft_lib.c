/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pollier <pollier@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:22:13 by elacombe          #+#    #+#             */
/*   Updated: 2015/12/15 07:52:05 by pollier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}

char	*ft_strnew(size_t size)
{
	char			*str;
	unsigned int	i;

	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	if (str)
	{
		i = 0;
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
		return (str);
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
