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

static int	valid_integer(char *nbr)
{
	size_t	i;
	long	n;

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
	return (1);
}

int	valid_swap_input(size_t array_size, char **array)
{
	size_t	i;

	i = 0;
	while (i < array_size)
	{
		if (!valid_integer(array[i]))
			return (0);
		if (!valid_dup(array, i))
			return (0);
		i++;
	}
	return (1);
}
