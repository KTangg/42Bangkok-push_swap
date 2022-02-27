/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:18:19 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 18:18:19 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	reverse_rotate_stack(t_stack *stack)
{
	int		tmp;
	int		prev;
	size_t	i;

	i = 1;
	prev = stack->i_array[0];
	while (i < stack->size)
	{
		if (i != (stack->size - 1))
		{
			tmp = stack->i_array[i];
			stack->i_array[i] = prev;
			prev = tmp;
		}
		else
		{
			tmp = stack->i_array[i];
			stack->i_array[i] = prev;
			prev = tmp;
			stack->i_array[0] = prev;
		}
		i++;
	}
}

void	reverse_rotate_a(t_stack *a)
{
	reverse_rotate_stack(a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stack *b)
{
	reverse_rotate_stack(b);
	ft_printf("rrb\n");
}

void	reverse_rotate_ab(t_stack *a, t_stack *b)
{
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
	ft_printf("rrr\n");
}
