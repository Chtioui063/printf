/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:40:48 by achtioui          #+#    #+#             */
/*   Updated: 2023/05/02 14:40:48 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putptr(unsigned long int n)
{
    int i;
    char    *base;

    i = 0;
    base = "0123456789abcdef";
    if (n >= 16)
    {
        i = ft_putptr(n / 16);
        ft_putchar(base[n % 16]);
    }
    else
		ft_putchar(base[(n % 16)]);
	return ( i + 1);
}