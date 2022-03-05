/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_sort_check_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:36:22 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/05 22:17:32 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include "checker_bonus.h"

static int	check_sort_ab(t_stack **a, t_stack **b);
static void	cmd_sort(char *cmd, t_stack **a, t_stack **b);

void	checking_sort_done(t_stack **a, t_stack **b)
{
	char	*cmd;
	char	*ok;

	ok = "OK";
	while (1)
	{
		cmd = get_next_line(0);
		if (cmd == NULL)
			break ;
		cmd_sort(cmd, a, b);
		free(cmd);
	}
	if (!check_sort_ab(a, b))
		ok = "KO";
	ft_putendl_fd(ok, 1);
}

static void	cmd_sort(char *cmd, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(cmd, "pa\n", 3))
		check_push_a(a, b);
	else if (!ft_strncmp(cmd, "pb\n", 3))
		check_push_b(a, b);
	else if (!ft_strncmp(cmd, "sa\n", 3))
		check_swap_a(a);
	else if (!ft_strncmp(cmd, "sb\n", 3))
		check_swap_b(b);
	else if (!ft_strncmp(cmd, "ss\n", 3))
		check_swap_ss(a, b);
	else if (!ft_strncmp(cmd, "ra\n", 3))
		check_rotate_a(a);
	else if (!ft_strncmp(cmd, "rb\n", 3))
		check_rotate_b(b);
	else if (!ft_strncmp(cmd, "rr\n", 3))
		check_rotate_ab(a, b);
	else if (!ft_strncmp(cmd, "rra\n", 4))
		check_reverse_rotate_a(a);
	else if (!ft_strncmp(cmd, "rrb\n", 4))
		check_reverse_rotate_b(b);
	else if (!ft_strncmp(cmd, "rrr\n", 4))
		check_reverse_rotate_ab(a, b);
	else
		swap_error(*a, *b);
}

static int	check_sort_ab(t_stack **a, t_stack **b)
{
	t_stack	*cursor;

	cursor = *a;
	if (*b != NULL)
		return (0);
	while (cursor != NULL)
	{
		if (cursor->next != NULL)
			if (cursor->i > cursor->next->i)
				return (0);
		cursor = cursor->next;
	}
	return (1);
}
