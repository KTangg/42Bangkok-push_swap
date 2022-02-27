/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:39:52 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 19:39:52 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static int	check_sort(t_stack a, t_stack b)
{
	size_t	i;

	i = 0;
	if (b.size != 0)
		return (0);
	while (i < (a.size - 1))
	{
		if (a.i_array[i] > a.i_array[i + 1])
			return (0);
		i++;
	}
	return (1);
}

static void	small_swap_sort(t_stack *a, t_stack *b)
{
	size_t	i;
	size_t	half;

	half = a->size / 2;
	i = 0;
	while (i < half)
	{
		push_a(a, b);
		i++;
	}
	if (a->i_array[0] > a->i_array[1])
		swap_a(a);
	if (b->i_array[0] > b->i_array[1])
		swap_b(b);
	i = 0;
	while (b->size > 0)
	{
		if (b->i_array[0] < a->i_array[0])
			push_b(a, b);
		else
			rotate_a(a);
	}
	while (!check_sort(*a, *b))
		reverse_rotate_a(a);
}

void	swap_sort(t_stack *a, t_stack *b)
{
	if (a->size < 5)
		small_swap_sort(a, b);
	/*else if (a->size <= 100)
		medium_swap_sort(*a, *b);
	else
		large_swap_sort(*a, *b);*/
}
