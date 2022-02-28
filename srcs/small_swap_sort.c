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
		rotate_a(a);
		rotate_a(a);
	}
	else if (top > mid && mid < bot && bot < top)
		rotate_a(a);
	else if (top < mid && mid > bot && bot < top)
	{
		swap_a(a);
		rotate_a(a);
	}
	else
		reverse_rotate_a(a);
}

void	small_swap_sort(t_stack **a, t_stack **b, size_t size)
{
	if (size == 2)
		swap_a(a);
	else if (size == 3)
		sort_stack_3(a);
	else
		(void)b;
}
