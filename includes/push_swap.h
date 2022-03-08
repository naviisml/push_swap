/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nismail <nismail@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/23 00:27:03 by nismail       #+#    #+#                 */
/*   Updated: 2022/03/06 16:56:45 by navi          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

typedef struct s_push_swap	t_push_swap;
typedef struct s_stack		t_stack;

int		stack_push(t_push_swap *ps, t_stack *s, t_stack *e, int p);
int		stack_pop(t_push_swap *ps, t_stack *s, int pos);
void	stack_free(t_push_swap *ps, t_stack *entry);
void	stack_debug_print(t_push_swap *push_swap, t_stack *stack);
int		error(char *str)

typedef struct s_stack
{
	t_stack	*previous;
	int		*value;
	t_stack *next;
} 			t_stack;

typedef struct s_push_swap
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		entries;
}	t_push_swap;

#endif