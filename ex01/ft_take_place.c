/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_place.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnematan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/07 16:20:57 by dnematan          #+#    #+#             */
/*   Updated: 2016/04/07 19:25:58 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int buff;

	buff = hour;
	if (hour > 12)
		buff = hour % 12;
	if (hour == 0)
		buff = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (buff < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", buff, (buff + 1) % 12);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", buff, (buff + 1) % 12);
}
