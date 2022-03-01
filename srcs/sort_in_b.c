/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:26:55 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/01 15:26:55 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	insert_min_b(t_minmax *minmax, t_stack **a, t_stack **b)
{
	rotate_to_min(b, minmax->min, 'b');
	push_a(a, b);
	swap_b(b);
	minmax->min = (*b)->i;
}

static void	insert_max_b(t_minmax *minmax, t_stack **a, t_stack **b)
{
	rotate_to_max(b, minmax->max, 'b');
	push_a(a, b);
	minmax->max = (*b)->i;
}

static void	insert_b(t_stack **a, t_stack **b)
{
	while ((*a)->i > (*b)->i)
	{
		if ((stack_last(*b)->i) > (*a)->i)
		{
			push_a(a, b);
			return ;
		}
		reverse_rotate_b(b);
	}
	while ((*a)->i < (*b)->i)
	{
		if ((*b)->next->i < (*a)->i)
		{
			push_a(a, b);
			swap_b(b);
			return ;
		}
		rotate_a(a);
	}
}

void	sort_in_b(t_stack **a, t_stack **b, size_t size)
{
	int			first;
	t_minmax	*minmax_b;

	first = 1;
	minmax_b = find_minmax(*b, 0);
	while (size > 0)
	{
		if (first)
		{
			push_a(a, b);
			minmax_b->min = (*b)->i;
			minmax_b->max = (*b)->i;
			first = 0;
			size--;
			continue ;
		}
		if ((*a)->i < minmax_b->min)
			insert_min_b(minmax_b, a, b);
		else if ((*a)->i > minmax_b->max)
			insert_max_b(minmax_b, a, b);
		else
			insert_b(a, b);
		size--;
	}
	rotate_to_max(b, minmax_b->max, 'b');
	free(minmax_b);
}
