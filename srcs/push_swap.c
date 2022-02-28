/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:19:20 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 23:24:18 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	free_stack(t_stack *a, t_stack *b);
//static int	check_sort(t_stack *a, t_stack *b);

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc > 1)
		argv = argv + 1;
	a = NULL;
	b = NULL;
	if (argc <=1)
		swap_error(a, b);
	if (!valid_swap_input(argc - 1, argv, &a))
		swap_error(a, b);
	//if (!check_sort(a, b))
		//swap_sort(&a, &b);
	print_stack(a);
	free_stack(a, b);
}

void	swap_error(t_stack *a, t_stack *b)
{
	free_stack(a, b);
	ft_putstr_fd("Error\n", STDERR);
	exit(1);
}

void	print_stack(t_stack *a, t_stack *b)
{
	ft_printf("a:	");
	while (a != NULL)
	{
		ft_printf("%d -> ", a->i);
	}
	ft_printf("NULL\n");
	ft_printf("b:	");
	while (b != NULL)
	{
		ft_printf("%d -> ", b->i);
	}
	ft_printf("NULL\n");
}

static void	free_stack(t_stack *a, t_stack *b)
{
	stack_clear(a);
	stack_clear(b);
	a = NULL;
	b = NULL;
}

/*static int	check_sort(t_stack *a, t_stack *b)
{
	return (0);
}*/
