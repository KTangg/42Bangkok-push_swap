/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operation_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:21:28 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 17:21:28 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	top_swap(t_stack *a)
{
	int	tmp;

	tmp = a->i_array[0];
	a->i_array[0] = a->i_array[1];
	a->i_array[1] = tmp;
}

void	swap_a(t_stack *a)
{
	top_swap(a);
	ft_printf("sa\n");
}

void	swap_b(t_stack *b)
{
	top_swap(b);
	ft_printf("sa\n");
}

void	push_swap_ss(t_stack *a, t_stack *b)
{
	top_swap(a);
	top_swap(b);
	ft_printf("ss\n");
	print_stack(a, b);
}
