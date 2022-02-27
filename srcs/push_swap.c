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

static void	print_stack(t_stack stack);
static int	check_sort(t_stack a, t_stack b);

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc > 1)
		argv = argv + 1;
	a.i_array= (int *)malloc(sizeof(int) * (argc - 1));
	a.size = argc - 1;
	b.i_array = NULL;
	b.size = 0;
	if (a.size < 1)
		swap_error(a, b);
	if (!valid_swap_input(argc - 1, argv, &a))
		swap_error(a, b);
	if (!check_sort(a, b))
		swap_sort(&a, &b);
	//free_ab(a, b);
	return (1);
}

void	swap_error(t_stack a, t_stack b)
{
	if (a.i_array)
		free(a.i_array);
	if (b.i_array)
		free(b.i_array);
	a.i_array = NULL;
	b.i_array = NULL;
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
		i++;
	}
	return (1);
}

/*static void	print_stack(t_stack stack)
{
	size_t	i;

	i = 0;
	while (i < stack.size)
	{
		ft_printf("%d\n", stack.i_array[i]);
		i++;
	}
}*/
