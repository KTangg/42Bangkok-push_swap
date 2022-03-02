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

typedef struct s_minmax
{
	int	min;
	int	max;
}	t_minmax;

int			valid_swap_input_split(char **array, t_stack **a);
int			valid_swap_input(size_t array_size, char **array, t_stack **a);
void		swap_a(t_stack **a);
void		swap_b(t_stack **b);
void		rotate_a(t_stack **a);
void		rotate_b(t_stack **b);
void		stack_clear(t_stack *stack);
void		reverse_rotate_a(t_stack **a);
void		reverse_rotate_b(t_stack **b);
void		push_a(t_stack **a, t_stack **b);
void		push_b(t_stack **a, t_stack **b);
void		swap_ss(t_stack **a, t_stack **b);
void		swap_error(t_stack *a, t_stack *b);
void		swap_sort(t_stack **a, t_stack **b);
void		rotate_ab(t_stack **a, t_stack **b);
void		print_stack(t_stack *a, t_stack *b);
void		insert_rotate_a(t_stack **a, t_stack **b);
void		rotate_to(t_stack **stack, int to, char c);
void		reverse_rotate_ab(t_stack **a, t_stack **b);
void		stack_add_btm(t_stack **stack, t_stack *new);
void		stack_add_top(t_stack **stack, t_stack *new);
void		rotate_to_min(t_stack **stack, int min, char c);
void		rotate_to_max(t_stack **stack, int max, char c);
void		sort_in_b(t_stack **a, t_stack **b, size_t size);
void		small_swap_sort(t_stack **a, t_stack **b, size_t size);
void		large_swap_sort(t_stack **a, t_stack **b, size_t size, size_t ch);
void		merge_a(t_stack **a, t_stack **b, size_t n_a, size_t n_b);
void		merge_a_fin(t_stack **a, t_stack **b, size_t n_a, size_t n_b);
size_t		stack_size(t_stack *stack);
t_stack		*create_stack(int i);
t_stack		*stack_last(t_stack *stack);
t_stack		*stack_push_top(t_stack **stack);
t_stack		*stack_push_bot(t_stack **stack);
t_minmax	*find_minmax(t_stack *stack, size_t size);

#endif
