/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:29:15 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 13:29:15 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

# define STDERR 2

typedef struct s_int_array
{
	int		*i_array;
	size_t	size;
}	t_stack;

int		valid_swap_input(size_t array_size, char **array, t_stack *a);
void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	rotate_a(t_stack *a);
void	rotate_b(t_stack *b);
void	reverse_rotate_a(t_stack *a);
void	reverse_rotate_b(t_stack *b);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	swap_error(t_stack a, t_stack b);
void	swap_sort(t_stack *a, t_stack *b);
void	rotate_ab(t_stack *a, t_stack *b);
void	print_stack(t_stack *a, t_stack *b);
void	reverse_rotate_ab(t_stack *a, t_stack *b);
void	small_swap_sort(t_stack *a, t_stack *b, size_t size);

#endif
