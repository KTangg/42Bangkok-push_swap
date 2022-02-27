/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_swap_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:54:43 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 13:54:43 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static int	valid_integer(char **array, size_t array_i, int *a)
{
	char	*nbr;
	size_t	i;
	long	n;

	nbr = array[array_i];
	i = 0;
	while (ft_isspace(nbr[i]))
		i++;
	if (nbr[i] == '+' || nbr[i] == '-')
		i++;
	while (nbr[i] != '\0')
	{
		if (!is_digit(nbr[i]))
			return (0);
		i++;
	}
	n = ft_atoi(nbr);
	if (n < -2147483648 || n > 2147483647)
		return (0);
	a[array_i] = n;
	return (1);
}

static int	valid_dup(size_t size, int *a)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (a[i] == a[size])
			return (0);
		i++;
	}
	return (1);
}

int	valid_swap_input(size_t array_size, char **array, t_stack *a)
{
	size_t	i;

	i = 0;
	while (i < array_size)
	{
		if (!valid_integer(array, i, a->i_array))
			return (0);
		if (!valid_dup(i, a->i_array))
			return (0);
		i++;
	}
	return (1);
}
