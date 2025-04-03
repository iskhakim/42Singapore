/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:25:48 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/03/26 00:16:24 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	d[3];

	d[0] = '0';
	while (d[0] <= '7')
	{
		d[1] = d[0] + 1;
		while (d[1] <= '8')
		{
			d[2] = d[1] + 1;
			while (d[2] <= '9')
			{
				write (1, &d[0], 1);
				write (1, &d[1], 1);
				write (1, &d[2], 1);
				if (!(d[0] == '7' && d[1] == '8' && d[2] == '9'))
				{
					write (1, ", ", 2);
				}
				d[2]++;
			}
			d[1]++;
		}
		d[0]++;
	}
}
