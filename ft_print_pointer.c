/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:47:37 by masselgu          #+#    #+#             */
/*   Updated: 2025/11/03 11:01:27 by masselgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_hex_pointer(unsigned long n)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += handle_hex_pointer(n / 16);
	ft_putchar(hex[n % 16]);
	len++;
	return (len);
}

int	ft_print_pointer(void *p)
{
	size_t	n;
	int		len;

	if (!p)
	{
		ft_putstr("(nil)");
		return (5);
	}
	n = (unsigned long)p;
	ft_putstr("0x");
	len = 2;
	len += handle_hex_pointer(n);
	return (len);
}
