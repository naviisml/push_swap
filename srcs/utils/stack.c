/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: navi <navi@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/06 13:52:24 by navi          #+#    #+#                 */
/*   Updated: 2022/03/08 18:07:34 by navi          ########   odam.nl         */
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
int	stack_push(t_push_swap *push_swap, t_stack **stack, t_stack *entry, int pos)
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
			n = 0;
			last_item = *stack;
			while (n < (pos - 1) && n < push_swap->entries)
			{
				last_item = last_item->next;
				n++;
			}
			entry->next = last_item->next;
			last_item->next = entry;
		}
	}
	push_swap->entries += 1;
	return (0);
}

/**
 * Create and return a new t_stack item
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
