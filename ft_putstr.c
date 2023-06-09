/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:49:14 by achtioui          #+#    #+#             */
/*   Updated: 2023/05/02 13:49:14 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putstr(const char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return (i);
}