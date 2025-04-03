/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibin-kam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 17:21:05 by ibin-kam          #+#    #+#             */
/*   Updated: 2025/04/03 17:40:39 by ibin-kam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char	c1;
	unsigned char	c2;
	
	if (n == 0) 
	{
		return(0);
	}
	while (n > 0 && *s1 && (*s1 == *s2))
		{
			s1++;
			s2++;
			n--;
		}
	c1 = (unsigned char)*s1;
	c2 = (unsigned char)*s2;
	return (c1 - c2);
}
