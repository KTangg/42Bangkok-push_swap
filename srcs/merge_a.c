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

static void	insert_min_a(t_minmax *minmax, t_stack **a, t_stack **b)
{
	rotate_to_min(a, minmax->min, 'a');
	push_a(a, b);
	minmax->min = (*a)->i;
}

static void	insert_max_a(t_minmax *minmax, t_stack **a, t_stack **b)
{
	rotate_to_max(a, minmax->max, 'a');
	rotate_a(a);
	push_a(a, b);
	minmax->max = (*a)->i;
}

static void	insert_a(t_stack **a, t_stack **b)
{
	while ((*b)->i > (*a)->i)
	{
		if ((*a)->next->i > (*b)->i)
		{
			push_a(a, b);
			swap_a(a);
			return ;
		}
		rotate_a(a);
	}
	while ((*b)->i < (*a)->i)
	{
		if ((stack_last(*a)->i) < (*b)->i)
		{
			push_a(a, b);
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
		if (*a == NULL)
		{
			push_b(a, b);
			minmax_a->min = (*a)->i;
			minmax_a->max = (*a)->i;
			n_b--;
			continue ;
		}
		if ((*b)->i < minmax_a->min)
			insert_min_a(minmax_a, a, b);
		else if ((*b)->i > minmax_a->max)
			insert_max_a(minmax_a, a, b);
		else
			insert_a(a, b);
		n_b--;
	}
	rotate_to_max(a, minmax_a->max, 'a');
	rotate_a(a);
	free(minmax_a);
}
