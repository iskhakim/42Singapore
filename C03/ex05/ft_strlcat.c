/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:18:51 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/04/03 19:55:16 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_count;
	char	*temp;
	unsigned int	i;

	dest_count = 0;
	temp = dest;
	i = 0;
	while (dest_count < size && *temp)
	{
		temp++;
		dest_count++;
	}
	while (src[i] && dest_count + i + 1 < size)
	{
		dest[dest_count + i] = src[i];
		i++;
	}
	if (dest_count < size)
	{
		dest[dest_count + i] = '\0';
	}
	return (dest_count);
}
