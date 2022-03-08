/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stack_debug.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: navi <navi@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/06 14:05:54 by navi          #+#    #+#                 */
/*   Updated: 2022/03/08 17:39:55 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

/**
 * Print int entries amount of items from t_stack *stack
 *
 * @return  void
 */
void	stack_debug_print(t_push_swap *push_swap, t_stack *stack)
{
	int		i;
	t_stack	*entry;

	i = push_swap->entries;
	entry = stack->next;
	while (i > 0)
	{
		ft_putnbr_fd(entry->value, 1);
		entry = entry->next;
		ft_putchar_fd('\n', 1);
		i--;
	}
}