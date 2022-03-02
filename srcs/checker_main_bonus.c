/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:33:46 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/02 21:26:35 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	free_stack(t_stack *a, t_stack *b);

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (1);
	a = NULL;
	b = NULL;
	if (argc == 2)
	{
		if (!valid_swap_input_split(argv + 1, &a))
			swap_error(a, b);
	}
	else
	{
		if (!valid_swap_input(argc - 1, argv + 1, &a))
			swap_error(a, b);
	}
	checking_sort_done(&a, &b);
	free_stack(a, b);
}

void	swap_error(t_stack *a, t_stack *b)
{
	free_stack(a, b);
	ft_putendl_fd("Error", 2);
	exit(1);
}

static void	free_stack(t_stack *a, t_stack *b)
{
	stack_clear(a);
	stack_clear(b);
	a = NULL;
	b = NULL;
}
