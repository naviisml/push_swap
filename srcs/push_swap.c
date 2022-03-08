/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:26:25 by nismail       #+#    #+#                 */
/*   Updated: 2022/03/06 16:45:34 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/**
 * Initialize the t_push_swap struct
 *
 * @return  t_push_swap
 */
static t_push_swap *initialize()
{
	t_push_swap	*push_swap;

	push_swap = (t_push_swap *)malloc(sizeof(t_push_swap));
	push_swap->stack_a = (t_stack *)malloc(sizeof(t_stack));
	push_swap->stack_b = (t_stack *)malloc(sizeof(t_stack));
	
	return (push_swap);
}

/**
 * This project will sort data on a stack, with a limited set of instructions,
 * using the lowest possible number of actions. For this project, you have to
 * manipulate various types of algorithms and choose the one (of many) most
 * appropriate solution for an optimized data sorting.
 */
int	main(int argc, char **args)
{
	t_push_swap	*push_swap;
	
	(void)argc;
	(void)args;
	push_swap = initialize();
	stack_debug_print(push_swap, push_swap->stack_a);
	return (0);
}