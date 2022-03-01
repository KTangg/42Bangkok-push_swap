/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utility_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:24:57 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/01 22:06:09 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

size_t	stack_size(t_stack *stack)
{
	size_t	size;

	size = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

t_minmax	*find_minmax(t_stack *stack, size_t size)
{
	size_t		i;
	t_minmax	*minmax;

	i = 0;
	minmax = (t_minmax *)malloc(sizeof(t_minmax) * 1);
	minmax->max = -2147483648;
	minmax->min = 2147483647;
	while (i + 1 <= size && stack != NULL)
	{
		if (stack->i > minmax->max)
			minmax->max = stack->i;
		if (stack->i < minmax->min)
			minmax->min = stack->i;
		stack = stack->next;
		i++;
	}
	return (minmax);
}

void	print_stack(t_stack *a, t_stack *b)
{
	ft_printf("a:	");
	while (a != NULL)
	{
		ft_printf("%d -> ", a->i);
		a = a->next;
	}
	ft_printf("NULL\n");
	ft_printf("b:	");
	while (b != NULL)
	{
		ft_printf("%d -> ", b->i);
		b = b->next;
	}
	ft_printf("NULL\n");
}

t_stack	*stack_push_bot(t_stack **stack)
{
	t_stack	*prev;
	t_stack	*cursor;

	cursor = *stack;
	prev = NULL;
	while (cursor != NULL)
	{
		if (cursor->next == NULL)
		{
			if (prev)
				prev->next = NULL;
			else
				*stack = NULL;
			return (cursor);
		}
		prev = cursor;
		cursor = cursor->next;
	}
	return (NULL);
}

t_stack	*stack_push_top(t_stack **stack)
{
	t_stack	*pushed;

	pushed = *stack;
	if (!pushed)
		return (NULL);
	*stack = pushed->next;
	pushed->next = NULL;
	return (pushed);
}
