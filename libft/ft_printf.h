/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 03:05:51 by amane             #+#    #+#             */
/*   Updated: 2022/03/15 10:46:20 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printchar(char c);
int		ft_printnbr(int nb);
size_t	ft_printstr(char *str);
size_t	ft_strlen(char *str);
int		ft_printf_hex(unsigned int nb, char c);
int		ft_unsigned_int(unsigned int nb);
int		ft_printf(const char *str, ...);
int		ft_main_print(va_list list, const char *str);
int		ft_print_pointer(unsigned long long nb);
#endif