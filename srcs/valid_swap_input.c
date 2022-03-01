/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_swap_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:54:43 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 15:30:22 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static int	valid_integer(char *nbr, t_stack **a)
{
	long	n;
	size_t	i;
	t_stack	*new;

	i = 0;
	while (ft_isspace(nbr[i]))
		i++;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	if (ft_strlen(&nbr[i]) > 10)
		return (0);
	while (nbr[i] != '\0')
	{
		if (!ft_isdigit(nbr[i]))
			return (0);
		i++;
	}
	n = ft_atoi(nbr);
	if (n < -2147483648 || n > 2147483647)
		return (0);
	new = create_stack(n);
	if (!new)
		return (0);
	stack_add_btm(a, new);
	return (1);
}

static int	valid_dup(t_stack *stack)
{
	t_stack	*check;

	check = stack_last(stack);
	while (stack != check)
	{
		if (stack->i == check->i)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	valid_swap_input_split(char **array, t_stack **a)
{
	int	i;

	array = ft_split(array[0], ' ');
	i = 0;
	while (array[i] != 0)
	{
		if (!valid_integer(array[i++], a))
		{
			free_array(array);
			return (0);
		}
		if (!valid_dup(*a))
		{
			free_array(array);
			return (0);
		}
	}
	free_array(array);
	return (1);
}

int	valid_swap_input(size_t array_size, char **array, t_stack **a)
{
	int	i;

	i = 0;
	while (i < array_size)
	{
		if (!valid_integer(array[i++], a))
			return (0);
		if (!valid_dup(*a))
			return (0);
	}
	return (1);
}
