/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rotate_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:08:21 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/05 22:05:08 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	rotate_stack(t_stack **stack)
{
	t_stack	*pushed;

	if (*stack == NULL)
		return ;
	pushed = stack_push_top(stack);
	stack_add_btm(stack, pushed);
}

void	check_rotate_a(t_stack **a)
{
	rotate_stack(a);
}

void	check_rotate_b(t_stack **b)
{
	rotate_stack(b);
}

void	check_rotate_ab(t_stack **a, t_stack **b)
{
	rotate_stack(a);
	rotate_stack(b);
}
