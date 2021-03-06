/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_format_util_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:19:35 by spoolpra          #+#    #+#             */
/*   Updated: 2022/02/23 14:19:35 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	check_prefix(char **format, char c)
{
	if (**format == '#')
	{
		if (c != 'x' && c != 'X')
			return (0);
		*format = *format + 1;
	}
	if (**format == ' ' || **format == '+')
	{
		if (c != 'd' && c != 'i')
			return (0);
		*format = *format + 1;
	}
	if (**format == '0')
	{
		if (c != 'i' && c != 'u' && c != 'd' && c != 'x' && c != 'X')
			return (0);
		*format = *format + 1;
	}
	return (1);
}

static int	valid_prefix(char *format)
{
	char	c;

	c = format[ft_strlen(format) - 1];
	if (!check_prefix(&format, c))
		return (0);
	while (ft_isdigit(*format))
		format++;
	if (*format != c)
		return (0);
	return (1);
}

int	valid_flag(char *format)
{
	if (!valid_prefix(format))
	{
		free(format);
		return (0);
	}
	return (1);
}
