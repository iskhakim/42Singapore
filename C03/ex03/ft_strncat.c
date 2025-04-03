/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:49:13 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/04/03 18:04:07 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*temp)
	{
		temp++;
	}
	while (*src && nb > 0)
	{
		*temp++ = *src++;
		nb--;
	}
	*temp = '\0';
	return (dest);
}
