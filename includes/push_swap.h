/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:27:03 by nismail       #+#    #+#                 */
/*   Updated: 2022/03/08 17:33:00 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

typedef struct s_push_swap	t_push_swap;
typedef struct s_stack		t_stack;

int		stack_push(t_push_swap *push_swap, t_stack **stack, t_stack *entry);
int		stack_pop(t_push_swap *ps, t_stack **s, int pos);
void	stack_free(t_push_swap *ps, t_stack *entry);
t_stack	*stack_create_item(int nbr);
void	stack_debug_print(t_push_swap *push_swap, t_stack *stack);
int		error(char *str)

typedef struct s_stack
{
	int		value;
	t_stack *next;
} 			t_stack;

typedef struct s_push_swap
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		entries;
}	t_push_swap;

#endif