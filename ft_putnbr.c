/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:11:05 by achtioui          #+#    #+#             */
/*   Updated: 2023/05/02 14:11:05 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_nbr(int n)
{
	int	count;

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

int	ft_putnbr(int n)
{
	int	count;

	count = count_nbr(n);
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
	return (count);
}