/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 23:46:53 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/03/26 00:13:13 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar (num1 / 10 + '0');
			ft_putchar (num1 % 10 + '0');
			ft_putchar (' ');
			ft_putchar (num2 / 10 + '0');
			ft_putchar (num2 % 10 + '0');
			if (num1 != 98 || num2 != 99)
			{
				write (1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
