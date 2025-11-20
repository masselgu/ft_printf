/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:03:03 by masselgu          #+#    #+#             */
/*   Updated: 2025/11/16 10:24:10 by masselgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	char	*s;
	int		len_s;

	s = ft_itoa(n);
	if (!s)
		return (0);
	len_s = ft_strlen(s);
	ft_putstr(s);
	free (s);
	return (len_s);
}
