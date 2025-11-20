/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:09:00 by masselgu          #+#    #+#             */
/*   Updated: 2025/11/03 11:00:50 by masselgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_lower(unsigned int n)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	len = 0;
	if (n >= 16)
		len += ft_print_hex_lower(n / 16);
	ft_putchar(hex[n % 16]);
	len++;
	return (len);
}
