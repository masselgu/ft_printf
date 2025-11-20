/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:21:15 by masselgu          #+#    #+#             */
/*   Updated: 2025/11/03 11:01:04 by masselgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(unsigned int n)
{
	char	*hex;
	int		len;

	hex = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	len = 0;
	if (n >= 16)
		len += ft_print_hex_upper(n / 16);
	ft_putchar(hex[n % 16]);
	len++;
	return (len);
}
