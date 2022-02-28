/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utility_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:42:13 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/28 11:42:13 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

t_stack	*create_stack(int i)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack) * 1);
	if (!stack)
		return (NULL);
	stack->i = i;
	stack->next = NULL;
	return (stack);
}

t_stack	*stack_last(t_stack *stack)
{
	while (stack != NULL)
	{
		if (stack->next == NULL)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

void	stack_add_top(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	tmp = *stack;
	*stack = new;
	new->next = tmp;
}

void	stack_add_btm(t_stack **stack, t_stack *new)
{
	t_stack	*btm_stack;

	btm_stack = stack_last(*stack);
	if (btm_stack == NULL)
		*stack = new;
	else
		btm_stack->next = new;
}

void	stack_clear(t_stack	*stack)
{
	t_stack	*cursor;

	while (stack != NULL)
	{
		cursor = stack->next;
		free(stack);
		stack = cursor;
	}
}
