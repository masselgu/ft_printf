/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:55:16 by masselgu          #+#    #+#             */
/*   Updated: 2025/11/03 11:01:34 by masselgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_signed(int n)
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
