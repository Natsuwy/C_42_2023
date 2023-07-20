/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:53:26 by michen            #+#    #+#             */
/*   Updated: 2023/07/02 19:15:07 by michen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01/ft_ultimate_ft.c"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
	int	*********p9;

	a = 21;
	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	printf("a avant fonction : %d\n", a);
	ft_ultimate_ft(p9);
	printf("a apres fonction : %d\n", a);
	return (0);
}
