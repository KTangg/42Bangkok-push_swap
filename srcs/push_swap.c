/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:19:20 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 15:30:01 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	error_report(t_stack a)
{
	if (a.i_array)
		free(a.i_array);
	a.i_array = NULL;
	ft_putstr_fd("Error\n", STDERR);
	exit(1);
}

static int	check_sort(t_stack a, t_stack b)
{
	size_t	i;

	i = 0;
	if (b.size != 0)
		return (0);
	while (i < (a.size - 1))
	{
		if (a.i_array[i] > a.i_array[i + 1])
			return (0);
	}
	return (1);
}

static void	print_stack(t_stack stack)
{
	size_t	i;

	i = 0;
	while (i < stack.size)
	{
		ft_printf("%d\n", stack.i_array[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc > 0)
		argv = argv + 1;
	a.i_array= (int *)malloc(sizeof(int) * (argc - 1));
	a.size = argc - 1;
	b.i_array = NULL;
	b.size = 0;
	if (!valid_swap_input(argc - 1, argv, &a))
		error_report(a);
	print_stack(a);
	while (!check_sort(a, b))
		ft_printf("Not sort\n");
		//push_swap_sort(a, b);
	ft_printf("Sort\n");
	//free_ab(a, b);
	return (1);
}
