/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:47:24 by masselgu          #+#    #+#             */
/*   Updated: 2025/11/16 10:23:59 by masselgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *s)
{
	int	len_s;

	if (!s)
		s = "(null)";
	ft_putstr(s);
	len_s = ft_strlen(s);
	return (len_s);
}
