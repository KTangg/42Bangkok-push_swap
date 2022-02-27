/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_swap_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:51:08 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 22:51:08 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	merge_a(t_stack *a, t_stack *b, size_t size)
{
	size_t	i;
	size_t	rotate_cnt;

	i = 0;
	rotate_cnt = 0;
	while (i < size && rotate_cnt + 1 < size + i)
	{
		if (a->i_array[0] > b->i_array[0])
		{
			push_b(a, b);
			i++;
			print_stack(a, b);
		}
		else
		{
			rotate_a(a);
			print_stack(a, b);
			rotate_cnt = rotate_cnt + 1;
		}
	}
	while (i++ < size)
	{
		push_b(a, b);
		print_stack(a, b);
	}
	while (rotate_cnt-- > 0)
	{
		reverse_rotate_a(a);
		print_stack(a, b);
	}
}

void	small_swap_sort(t_stack *a, t_stack *b, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size / 2))
	{
		push_a(a, b);
		print_stack(a, b);
		i++;
	}
	if (a->size > 1)
	{
		if (a->i_array[0] > a->i_array[1])
		{
			swap_a(a);
			print_stack(a, b);
		}
	}
	if (b->size > 1)
	{
		if (b->i_array[0] < b->i_array[1])
		{
			swap_a(b);
			print_stack(a, b);
		}
	}
	merge_a(a, b, size / 2);
}
