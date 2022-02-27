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

static void	error_report(void)
{
	ft_putstr_fd("Error\n", STDERR);
	exit(1);
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;

	if (!valid_swap_input(argc - 1, argv))
		error_report();
	a = create_swap_stack(argc - 1, argv);
	b = NULL;
	while (!swap_sort(a, b))
		push_swap_sort(a, b);
	free_ab(a, b);
	return (1);
}
