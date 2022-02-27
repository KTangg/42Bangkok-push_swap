/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:19:20 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 13:19:20 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	error_report(t_stack *a)
{
	if (a->i_array)
		free(a->i_array);
	a->i_array = NULL;
	ft_putstr_fd("Error\n", STDERR);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a->i_array= (int *)malloc(sizeof(int) * (argc - 1));
	a->size = argc - 1;
	b->i_array = NULL;
	b->size = 0;
	if (!valid_swap_input(argc - 1, argv, a))
		error_report(a);
	/*while (!swap_sort(a, b))
		push_swap_sort(a, b);
	free_ab(a, b);*/
	return (1);
}
