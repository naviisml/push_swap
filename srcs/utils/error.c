/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: navi <navi@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 17:32:36 by navi          #+#    #+#                 */
/*   Updated: 2022/03/08 17:33:42 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/**
 * Quit the program with a error
 *
 * @param   char  str 
 *
 * @return  int
 */
int	error(char *str)
{
	ft_putstr_fd("Error\n", 0);
	if (str != NULL)
		ft_putstr_fd(str, 0);
	exit(0);
	return (0);
}
