/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:08:21 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 18:08:21 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	rotate_stack(t_stack **stack)
{
	t_stack	*pushed;

	pushed = stack_push_top(stack);
	stack_add_btm(stack, pushed);
}

void	rotate_a(t_stack **a)
{
	rotate_stack(a);
	ft_printf("ra\n");
}

void	rotate_b(t_stack **b)
{
	rotate_stack(b);
	ft_printf("rb\n");
}

void	rotate_ab(t_stack **a, t_stack **b)
{
	rotate_stack(a);
	rotate_stack(b);
	ft_printf("rr\n");
}
