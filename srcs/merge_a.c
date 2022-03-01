/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:40:31 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/28 15:40:31 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	insert_min_a(t_minmax *minmax, t_stack **a, t_stack **b)
{
	rotate_to_min(a, minmax->min, 'a');
	push_b(a, b);
	minmax->min = (*a)->i;
}

void	insert_max_a(t_minmax *minmax, t_stack **a, t_stack **b)
{
	rotate_to_max(a, minmax->max, 'a');
	rotate_a(a);
	push_b(a, b);
	minmax->max = (*a)->i;
}

void	insert_a(t_stack **a, t_stack **b)
{
	while ((*b)->i > (*a)->i)
	{
		if ((*a)->next->i > (*b)->i)
		{
			rotate_a(a);
			push_b(a, b);
			return ;
		}
		rotate_a(a);
	}
	while ((*b)->i < (*a)->i)
	{
		if ((stack_last(*a)->i) < (*b)->i)
		{
			push_b(a, b);
			return ;
		}
		reverse_rotate_a(a);
	}
}

void	merge_a(t_stack **a, t_stack **b, size_t n_a, size_t n_b)
{
	t_minmax	*minmax_a;

	minmax_a = find_minmax(*a, n_a);
	while (n_b > 0)
	{
		if ((*b)->i < minmax_a->min)
			insert_min_a(minmax_a, a, b);
		else if ((*b)->i > minmax_a->max)
			insert_max_a(minmax_a, a, b);
		else
			insert_a(a, b);
		n_b--;
	}
	rotate_to_min(a, minmax_a->min, 'a');
}
