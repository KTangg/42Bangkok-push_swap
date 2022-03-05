/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_swap_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:21:28 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/05 22:10:40 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	top_swap(t_stack **stack)
{
	t_stack	*cursor;

	cursor = *stack;
	if (!cursor->next)
		return ;
	*stack = cursor->next;
	cursor->next = (*stack)->next;
	(*stack)->next = cursor;
}

void	check_swap_a(t_stack **a)
{
	top_swap(a);
}

void	check_swap_b(t_stack **b)
{
	top_swap(b);
}

void	check_swap_ss(t_stack **a, t_stack **b)
{
	top_swap(a);
	top_swap(b);
}
