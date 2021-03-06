/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:11:17 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/18 19:10:38 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		valid_flag(char *str);
char	*ft_itoa(long n);
char	*get_format(char **format);
char	*extend_format(char *var_format, void *var, size_t *var_size);
void	*get_percent(size_t *var_size);
void	*get_ud(va_list *arg, size_t *var_size);
void	*get_str(va_list *arg, size_t *var_size);
void	*get_dec(va_list *arg, size_t *var_size);
void	*get_int(va_list *arg, size_t *var_size);
void	*get_ptr(va_list *arg, size_t *var_size);
void	*get_char(va_list *arg, size_t *var_size);
void	*get_hex(va_list *arg, size_t *var_size, int mode);
void	*realloc_printf(void *ptr, size_t old_size, size_t new_size);
void	*memjoin(void *ptr1, void *ptr2, size_t p1_size, size_t p2_size);

#endif
