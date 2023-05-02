/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achtioui <achtioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:16:10 by achtioui          #+#    #+#             */
/*   Updated: 2023/05/02 14:16:10 by achtioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *string, int searchedchar)
{
	while (*string)
	{
		if (*string == (const char) searchedchar)
			return ((char *) string);
		string++;
	}
	if (*string == (const char) searchedchar)
		return ((char *) string);
	return (NULL);
}