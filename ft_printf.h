/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masselgu <masselgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:12:41 by masselgu          #+#    #+#             */
/*   Updated: 2025/11/03 11:02:16 by masselgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_print_char(char c);
int		ft_print_string(char *s);
int		ft_print_pointer(void *p);
int		ft_print_signed(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex_lower(unsigned int n);
int		ft_print_hex_upper(unsigned int n);
int		ft_print_percent(void);
char	*ft_itoa(long nb);
int		ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);

#endif