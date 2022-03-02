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

size_t	index_finder(t_stack **stack, int i)
{
	size_t	index;
	t_stack	*cursor;

	cursor = *stack;
	index = 0;
	while (cursor != NULL)
	{
		if (cursor->i == i)
			return (index);
		index++;
		cursor = cursor->next;
	}
	return (0);
}

int	dir_check(t_stack **stack, int	to)
{
	int	all;
	int	to_index;

	all = stack_size(*stack) - 1;
	to_index = index_finder(stack, to);
	if (to_index > all - to_index + 1)
		return (-1);
	else
		return (1);
}

void	rotate_to(t_stack **stack, int to, char c)
{
	if (dir_check(stack, to) > 0)
	{
		while ((*stack)->i != to)
		{
			if (c == 'a')
				rotate_a(stack);
			else if (c == 'b')
				rotate_b(stack);
		}
	}
	else
	{
		while ((*stack)->i != to)
		{
			if (c == 'a')
				reverse_rotate_a(stack);
			else if (c == 'b')
				reverse_rotate_b(stack);
		}
	}
}

/*void	rotate_to_min(t_stack **stack, int min, char c)
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
		if (last->i == min && (*stack)->i != last->i)
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
		if (last->i == max && (*stack)->i != last->i)
			reverse_rotate_a(stack);
		while ((*stack)->i != max)
			rotate_a(stack);
	}
	if (c == 'b')
	{
		while ((*stack)->i != max)
			reverse_rotate_b(stack);
	}
}*/
