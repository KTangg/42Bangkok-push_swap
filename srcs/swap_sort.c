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

void	swap_sort(t_stack *a, t_stack *b)
{
	if (a->size <= 5)
		small_swap_sort(*a, *b);
	else if (a->size <= 100)
		medium_swap_sort(*a, *b);
	else
		large_swap_sort(*a, *b);
}
