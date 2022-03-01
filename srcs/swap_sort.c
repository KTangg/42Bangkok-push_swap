/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:07:54 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/28 14:48:34 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static inline size_t	chunk_divide(size_t size)
{
	size_t	chunks;

	chunks = 3;
	if (size > 100)
		chunks = 5;
	else if (size > 500)
		chunks = 11;
	return (chunks);
}

void	swap_sort(t_stack **a, t_stack **b)
{
	size_t	size;
	size_t	chunks;

	size = stack_size(*a);
	if (size <= 5)
	{
		small_swap_sort(a, b, size);
	}
	else
	{
		chunks = chunk_divide(size);
		large_swap_sort(a, b, size);
	}
}
