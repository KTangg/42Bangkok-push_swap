/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_push_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:28:42 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/05 22:09:12 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

void	check_push_a(t_stack **a, t_stack **b)
{
	t_stack	*pushed;

	if (*b == NULL)
		return ;
	pushed = stack_push_top(b);
	stack_add_top(a, pushed);
}

void	check_push_b(t_stack **a, t_stack **b)
{
	t_stack	*pushed;

	if (*a == NULL)
		return ;
	pushed = stack_push_top(a);
	stack_add_top(b, pushed);
}
