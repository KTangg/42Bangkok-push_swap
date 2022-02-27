/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_operation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 17:28:42 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/27 17:28:42 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static int	*intcpy(int *dst, int *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

static int	*cut_top(int *array, size_t size)
{
	int	*new_array;

	if (size == 1)
	{
		free(array);
		return(NULL);
	}
	new_array = (int *)malloc(sizeof(int) * (size - 1));
	if (!new_array)
	{
		free(array);
		return (NULL);
	}
	free(array);
	new_array = intcpy(new_array, array + 1, size - 1);
	return (new_array);
}

static int	*add_top(int *array, size_t size, int new)
{
	int	*new_array;

	new_array = (int *)malloc(sizeof(int) * (size + 1));
	if (!new_array)
	{
		if (array)
			free(array);
		return (NULL);
	}
	new_array[0] = new;
	if (size > 0)
		intcpy(&new_array[1], array, size);
	if (array)
		free(array);
	return (new_array);
}

void	push_a(t_stack a, t_stack b)
{
	int	tmp;

	tmp = a.i_array[0];
	a.i_array = cut_top(a.i_array, a.size);
	a.size = a.size - 1;
	if (a.size != 0 && a.i_array == NULL)
		swap_error(a, b);
	b.i_array = add_top(b.i_array, b.size, tmp);
	b.size = b.size + 1;
	if (!b.i_array)
		swap_error(a, b);
	ft_printf("pa\n");
}

void	push_b(t_stack a, t_stack b)
{
	int	tmp;

	tmp = b.i_array[0];
	b.i_array = cut_top(b.i_array, b.size);
	b.size = b.size - 1;
	if (b.size != 0 && b.i_array == NULL)
		swap_error(a, b);
	a.i_array = add_top(a.i_array, a.size, tmp);
	a.size = a.size + 1;
	if (!a.i_array)
		swap_error(a, b);
	ft_printf("pb\n");
}
