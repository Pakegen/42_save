/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:33:17 by qallain           #+#    #+#             */
/*   Updated: 2022/07/14 19:23:26 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putcar()
	int a;
	int i;
	a = a / 10 + 0;
	i = i % 10 + 0;
	write(1, &a, 1);
	write(1, &i, 1);
void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	
	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 99)
		{

			ft_putchar(a)
			write(1, " ", 1);
		b++;
		}
	a++;
	}
	
}

int        main(void)
{
    ft_print_comb2();
}
