/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 11:19:38 by dnematan          #+#    #+#             */
/*   Updated: 2016/04/08 11:37:46 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int x;
	int z;
	int j;

	x = *******c;
	z = ****d;
	j = *b;
	*******c = ***a;
	****d = x;
	*b = z;
	***a = j;
}