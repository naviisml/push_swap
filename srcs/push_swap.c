/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:26:25 by nismail       #+#    #+#                 */
/*   Updated: 2022/03/08 17:36:48 by navi          ########   odam.nl         */
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
 * Initialize the push_swap->stack_a struct
 *
 * @param   char  lst
 * @param   int   n
 *
 * @return  void
 */
static void stack_initialize(t_push_swap *push_swap, char **lst, int n)
{
	t_stack		*new_stack;
	int			i;
	int			nbr;

	i = 1;
	while (i < n)
	{
		nbr = ft_atoi(lst[i]);
		if (ft_isaldigit(lst[i]) == 1)
		{
			new_stack = stack_create_item(nbr);
			if (!new_stack)
				error("Memory error!");
			stack_push(push_swap, &push_swap->stack_a, new_stack);
		}
		else
		{
			error("Invalid arguments");
		}
		i++;
	}
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
	
	push_swap = initialize();
	stack_initialize(push_swap, args, argc);
	stack_debug_print(push_swap, push_swap->stack_a);
	return (0);
}