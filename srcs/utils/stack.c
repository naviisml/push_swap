/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: navi <navi@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/06 13:52:24 by navi          #+#    #+#                 */
/*   Updated: 2022/03/08 17:31:57 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/**
 * Push the stack *entry at int pos in t_stack->stack
 *
 * @param   t_stack		stack
 * @param   t_stack		entry
 * @param   int  		pos
 *
 * @return  int
 */
int	stack_push(t_push_swap *push_swap, t_stack **stack, t_stack *entry)
{
	t_stack	*last_item;
	int		n;

	if (stack && entry)
	{
		if (*stack == NULL)
		{
			*stack = entry;
		}
		else
		{
			n = push_swap->entries;
			entry->next = *stack;
			last_item = *stack;
			while (n > 0)
			{
				if (last_item->next)
					last_item = last_item->next;
				else
					break ;
				n--;
			}
			last_item->next = entry;
		}
	}
	push_swap->entries += 1;
	return (0);
}

/**
 * Remove the item on int pos from push_swap->stack
 *
 * @param   t_push_swap	push_swap
 * @param   int  		pos
 *
 * @return  int
 */
int	stack_pop(t_push_swap *push_swap, t_stack **stack, int pos)
{
	(void)push_swap;
	(void)stack;
	(void)pos;
	return (0);
}

/**
 * Create a new t_stack struct
 *
 * @param   int      nbr
 *
 * @return  t_stack
 */
t_stack	*stack_create_item(int nbr)
{
	t_stack	*item;

	item = (t_stack *)malloc(sizeof(t_stack));
	if (!item)
		return (0);
	item->value = nbr;
	item->next = NULL;
	return (item);
}
