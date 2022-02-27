/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:08:21 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 18:08:21 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	rotate_stack(t_stack stack)
{
	int		tmp;
	size_t	i;

	i = 0;
	tmp = stack.i_array[0];
	while (i < stack.size)
	{
		if (i != (stack.size - 1))
			stack.i_array[i] = stack.i_array[i + 1];
		else
			stack.i_array[i] = tmp;
		i++;
	}
}

void	rotate_a(t_stack a)
{
	rotate_stack(a);
	ft_printf("ra\n");
}

void	rotate_b(t_stack b)
{
	rotate_stack(b);
	ft_printf("rb\n");
}

void	rotate_ab(t_stack a, t_stack b)
{
	rotate_stack(a);
	rotate_stack(b);
	ft_printf("rr\n");
}
