/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:55:07 by spoolpra          #+#    #+#             */
/*   Updated: 2022/03/05 22:21:23 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "libft.h"
# include "push_swap.h"

void	check_swap_a(t_stack **a);
void	check_swap_b(t_stack **b);
void	check_rotate_a(t_stack **a);
void	check_rotate_b(t_stack **b);
void	check_reverse_rotate_a(t_stack **a);
void	check_reverse_rotate_b(t_stack **b);
void	check_push_a(t_stack **a, t_stack **b);
void	check_push_b(t_stack **a, t_stack **b);
void	check_swap_ss(t_stack **a, t_stack **b);
void	check_rotate_ab(t_stack **a, t_stack **b);
void	check_reverse_rotate_ab(t_stack **a, t_stack **b);

#endif
