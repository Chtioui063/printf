/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:47:09 by achtioui          #+#    #+#             */
/*   Updated: 2023/05/02 14:47:09 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ucount_nbr(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n < count)
		count++;
	if (!n)
		return (1);
	while (n)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

int ft_putunbr(unsigned int n)
{
    unsigned int    count;

    count = ucount_nbr(n);
    if (n == 0)
    {
        ft_putchar('0');
        return (1);
    }
    if (n > 9)
    {
        ft_putunbr(n / 10);
        ft_putunbr(n % 10);
    }
    else
        ft_putchar(n + '0');
    return (count);
}