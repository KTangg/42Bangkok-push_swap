/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:19:20 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/28 14:49:14 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	free_stack(t_stack *a, t_stack *b);
static int	check_sort(t_stack *stack);

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (1);
	a = NULL;
	b = NULL;
	if (argc == 2)
		if (!valid_swap_input_split(argv + 1, &a))
			swap_error(a, b);
	else
		if (!valid_swap_input(argc - 1, argv + 1, &a))
			swap_error(a, b);
	if (!check_sort(a))
		swap_sort(&a, &b);
	print_stack(a, b);
	free_stack(a, b);
}

void	swap_error(t_stack *a, t_stack *b)
{
	free_stack(a, b);
	ft_putstr_fd("Error\n", STDERR);
	exit(1);
}

static void	free_stack(t_stack *a, t_stack *b)
{
	stack_clear(a);
	stack_clear(b);
	a = NULL;
	b = NULL;
}

static int	check_sort(t_stack *stack)
{
	while (stack != NULL)
	{
		if (stack->next != NULL)
			if (stack->i > stack->next->i)
				return (0);
		stack = stack->next;
	}
	return (1);
}
