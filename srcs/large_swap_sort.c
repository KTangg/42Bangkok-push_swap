/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_swap_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:58:38 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/01 14:58:38 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	large_swap_sort(t_stack **a, t_stack **b, size_t size, size_t chunks)
{
	size_t	i;
	size_t	chunk_size;
	size_t	last_chunk;

	i = 0;
	chunk_size = size / chunks;
	last_chunk = size - (chunk_size * (chunks - 1));
	while (i < chunks)
	{
		if (i++ + 1 < chunks)
			sort_in_b(a, b, chunk_size);
		else
			sort_in_b(a, b, last_chunk);
	}
	i = 0;
	while (i < chunks)
	{
		if (i++ == 0)
			merge_a(a, b, 0, last_chunk);
		else
			merge_a_fin(a, b, last_chunk + ((i - 1) * chunk_size), chunk_size);
	}
}
