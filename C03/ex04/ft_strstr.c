/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:04:54 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/04/03 18:16:36 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*find;

	if (*to_find == '\0')
	{
		return (str);
	}

	while (*str)
	{
		start = str;
		find = to_find;
		while (*find && *str == *find)
		{
			str++;
			find++;
			if (*find == '\0')
			{
				return start;
			}
		}
		str = start + 1;
	}
	return NULL;
}
