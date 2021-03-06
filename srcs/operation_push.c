/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_operation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:28:42 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 17:28:42 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	push_a(t_stack **a, t_stack **b)
{
	t_stack	*pushed;

	pushed = stack_push_top(b);
	stack_add_top(a, pushed);
	ft_printf("pa\n");
}

void	push_b(t_stack **a, t_stack **b)
{
	t_stack	*pushed;

	pushed = stack_push_top(a);
	stack_add_top(b, pushed);
	ft_printf("pb\n");
}
