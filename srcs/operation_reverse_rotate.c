/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:18:19 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 18:18:19 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

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

static void	reverse_rotate_stack(t_stack **stack)
{
	t_stack	*pushed;

	pushed = stack_push_bot(stack);
	stack_add_top(stack, pushed);
}

void	reverse_rotate_a(t_stack **a)
{
	reverse_rotate_stack(a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack **b)
{
	reverse_rotate_stack(b);
	ft_printf("rrb\n");
}

void	reverse_rotate_ab(t_stack **a, t_stack **b)
{
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
	ft_printf("rrr\n");
}
