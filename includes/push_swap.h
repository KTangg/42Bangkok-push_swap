/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:29:15 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/28 14:48:14 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

# define STDERR 2

typedef struct s_stack
{
	int				i;
	struct s_stack	*next;
}	t_stack;

int		valid_swap_input(size_t array_size, char **array, t_stack **a);
void	swap_a(t_stack **a);
void	swap_b(t_stack **b);
void	rotate_a(t_stack **a);
void	rotate_b(t_stack **b);
void	stack_clear(t_stack *stack);
void	print_stack(t_stack *a, t_stack *b);
void	reverse_rotate_a(t_stack **a);
void	reverse_rotate_b(t_stack **b);
void	push_a(t_stack **a, t_stack **b);
void	push_b(t_stack **a, t_stack **b);
void	swap_ss(t_stack **a, t_stack **b);
void	swap_error(t_stack *a, t_stack *b);
void	swap_sort(t_stack **a, t_stack **b);
void	rotate_ab(t_stack **a, t_stack **b);
void	reverse_rotate_ab(t_stack **a, t_stack **b);
void	stack_add_btm(t_stack **stack, t_stack *new);
void	stack_add_top(t_stack **stack, t_stack *new);
size_t	stack_size(t_stack *stack);
t_stack	*create_stack(int i);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_push_top(t_stack **stack);
t_stack	*stack_push_bot(t_stack **stack);

#endif
