/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:25 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/03/25 21:46:07 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;

	start = 'a';
	while (start <= 'z')
	{
		write(1, &start, 1);
		start++;
	}
}
