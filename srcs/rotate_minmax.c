/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_minmax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:36:04 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/01 13:36:04 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	rotate_to_min(t_stack **stack, int min, char c)
{
	t_stack	*last;

	last = stack_last(*stack);
	if (c == 'a')
	{
		while ((*stack)->i != min)
			reverse_rotate_a(stack);
	}
	if (c == 'b')
	{
		if (last->i == min)
			reverse_rotate_b(stack);
		while ((*stack)->i != min)
			rotate_b(stack);
	}
}

void	rotate_to_max(t_stack **stack, int max, char c)
{
	t_stack	*last;

	last = stack_last(*stack);
	if (c == 'a')
	{
		if (last->i == max)
			reverse_rotate_a(stack);
		while ((*stack)->i != max)
			rotate_a(stack);
	}
	if (c == 'b')
	{
		while ((*stack)->i != max)
			reverse_rotate_b(stack);
	}
}
