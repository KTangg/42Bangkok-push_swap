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

static void	reverse_rotate_stack(t_stack stack)
{
	int		tmp;
	size_t	i;

	i = 0;
	while (i < stack.size)
	{
		if (i != (stack.size - 1))
		{
			tmp = stack.i_array[i + 1];
			stack.i_array[i + 1] = stack.i_array[i];
		}
		else
			stack.i_array[0] = tmp;
		i++;
	}
}

void	reverse_rotate_a(t_stack a)
{
	reverse_rotate_stack(a);
	ft_printf("ra\n");
}

void	reverse_rotate_b(t_stack b)
{
	reverse_rotate_stack(b);
	ft_printf("rb\n");
}

void	reverse_rotate_ab(t_stack a, t_stack b)
{
	reverse_rotate_stack(a);
	reverse_rotate_stack(b);
	ft_printf("rr\n");
}
