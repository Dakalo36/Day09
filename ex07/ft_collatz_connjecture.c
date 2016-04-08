/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_connjecture.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/08 04:51:08 by dnematan          #+#    #+#             */
/*   Updated: 2016/04/08 06:43:51 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base > 0)
	{
		printf("Before recursive: %d\n", base);
		if ((base % 2) == 0)
		{
			base = base / 2;
		}
		else
		{
			base = base * 3 + 1;
		}
		if (base == 1)
			return (1);
		else
		{
			return (1 + ft_collatz_conjecture(base));
		}
	}
	return (base);
}
