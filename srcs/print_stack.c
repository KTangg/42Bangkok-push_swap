
#include "libft.h"
#include "push_swap.h"

void	print_stack(t_stack *a, t_stack *b)
{
	size_t	i_a = 0;
	size_t	i_b = 0;
	size_t	max;
	char	*s1;
	char	*s2;

	max = a->size;
	if (b->size > max)
		max = b->size;
	ft_printf("	a	b	\n");
	ft_printf("-----------------------------\n");
	while (max > 0)
	{
		if (max > a->size)
			s1 = " ";
		else
			s1 = ft_itoa(a->i_array[i_a++]);
		if (max > b->size)
			s2 = " ";
		else
			s2 = ft_itoa(b->i_array[i_b++]);
		max--;
		ft_printf("	%s	%s	\n", s1, s2);
		if (s1[0] != ' ')
			free(s1);
		if (s2[0] != ' ')
			free(s2);
	}
	ft_printf("\n");
}
