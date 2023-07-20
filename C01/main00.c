/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:56:52 by michen            #+#    #+#             */
/*   Updated: 2023/07/02 18:50:51 by michen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_ft.c"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	*ptr;

	a = 21;
	ptr = &a;
	printf("a avant fonction : %d\n", a);
	ft_ft(ptr);
	printf("a apres fonction : %d\n", a);
	return (0);
}
