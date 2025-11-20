/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:14:01 by masselgu          #+#    #+#             */
/*   Updated: 2025/11/19 12:41:40 by masselgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_printf(const char *format, size_t i, va_list ap)
{
	if (format[i] == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (format[i] == 's')
		return (ft_print_string(va_arg(ap, char *)));
	else if (format[i] == 'p')
		return (ft_print_pointer(va_arg(ap, void *)));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_print_signed(va_arg(ap, int)));
	else if (format[i] == 'u')
		return (ft_print_unsigned(va_arg(ap, unsigned int)));
	else if (format[i] == 'x')
		return (ft_print_hex_lower(va_arg(ap, unsigned int)));
	else if (format[i] == 'X')
		return (ft_print_hex_upper(va_arg(ap, unsigned int)));
	else if (format[i] == '%')
		return (ft_print_percent());
	else
	{
		ft_putchar('%');
		ft_putchar(format[i]);
		return (2);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	size_t	i;
	int		res;

	if (!format)
		return (-1);
	va_start(ap, format);
	i = 0;
	res = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			res = handle_printf(format, i, ap);
			count += res;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
