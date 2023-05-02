/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:32:28 by achtioui          #+#    #+#             */
/*   Updated: 2023/05/02 13:32:28 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

int     ft_printf(const char *s, ...);
int     ft_putptr(unsigned long int n);
int     ft_putunbr(unsigned int n);
int     ft_putchar(char c);
int     ft_putstr(const char *str);
int     ft_printhexa_maj(unsigned int n);
int     ft_printhexa_min(unsigned int n);
int 	ft_putnbr(int n);
int     ft_strlen(const char *str);
char	*ft_strchr(const char *string, int searchedchar);

# endif