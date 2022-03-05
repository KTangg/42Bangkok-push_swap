/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_reverse_rotate_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:18:19 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/05 22:05:21 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	reverse_rotate_stack(t_stack **stack)
{
	t_stack	*pushed;

	if (*stack == NULL)
		return ;
	pushed = stack_push_bot(stack);
	stack_add_top(stack, pushed);
}

void	check_reverse_rotate_a(t_stack **a)
{
	reverse_rotate_stack(a);
}

void	check_reverse_rotate_b(t_stack **b)
{
	reverse_rotate_stack(b);
}

void	check_reverse_rotate_ab(t_stack **a, t_stack **b)
{
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
}
