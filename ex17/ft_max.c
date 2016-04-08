/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 13:39:18 by dnematan          #+#    #+#             */
/*   Updated: 2016/04/08 13:47:37 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_max(int *tab, int length)
{
	int i;
	int maximum;

	i =0;
	maximum = tab[i];
	while (i < length)
	{
		if (tab[i] > maximum)
			maximum = tab[i];
		i++;
	}
	return (maximum);
}
