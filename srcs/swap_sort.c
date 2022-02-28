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

void	swap_sort(t_stack **a, t_stack **b)
{
	size_t	size;

	size = stack_size(*a);
	if (size < 6)
		small_swap_sort(a, b, size);
}
