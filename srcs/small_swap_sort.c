/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_swap_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:20:55 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/28 14:20:55 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	sort_stack_3(t_stack **a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*a)->i;
	mid = (*a)->next->i;
	bot = (*a)->next->next->i;
	if (top > mid && mid < bot && bot > top)
		swap_a(a);
	else if (top > mid && mid > bot && bot < top)
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
	else if (top > mid && mid < bot && bot < top)
		rotate_a(a);
	else if (top < mid && mid > bot && bot > top)
	{
		swap_a(a);
		rotate_a(a);
	}
	else
		reverse_rotate_a(a);
}

static void	sort_stack_5(t_stack **a, t_stack **b, size_t size)
{
	size_t	n_b;
	size_t	push_size;

	n_b = 0;
	push_size = size - 3;
	while (push_size > 0)
	{
		push_a(a, b);
		push_size--;
		n_b++;
	}
	sort_stack_3(a);
	merge_a(a, b, 3, n_b);
}

void	small_swap_sort(t_stack **a, t_stack **b, size_t size)
{
	if (size == 2)
		swap_a(a);
	else if (size == 3)
		sort_stack_3(a);
	else
		sort_stack_5(a, b, size);
}
