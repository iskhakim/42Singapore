/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 23:04:00 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/03/26 23:12:13 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	front_index;
	int	back_index;
	int	temp;

	front_index = 0;
	back_index = size - 1;
	while (front_index < back_index)
	{
		temp = tab[front_index];
		tab[front_index] = tab[back_index];
		tab[back_index] = temp;
		front_index++;
		back_index--;
	}
}
