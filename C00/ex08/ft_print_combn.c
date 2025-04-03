/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:10:18 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/03/26 01:21:10 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	recurse(int num, int current, int digit, int output[])
{
	int	i;

	i = 0;
	if (current == num)
	{
		while (i < num)
		{
			ft_putchar(output[i] + '0');
			i++;
		}
		if (output[0] != (10 - num))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		return ;
	}
	while (digit <= 9)
	{
		output[current] = digit;
		recurse(num, current + 1, digit + 1, output);
		digit++;
	}
}

void	ft_print_combn(int num)
{
	int	output[10];

	if (num > 0 && num < 10)
	{
		recurse(num, 0, 0, output);
	}
}
