/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operation_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:21:28 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 17:21:28 by spoolpra         ###   ########.fr       */
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

void	swap_a(t_stack **a)
{
	top_swap(a);
	ft_printf("sa\n");
}

void	swap_b(t_stack **b)
{
	top_swap(b);
	ft_printf("sb\n");
}

void	swap_ss(t_stack **a, t_stack **b)
{
	top_swap(a);
	top_swap(b);
	ft_printf("ss\n");
}
