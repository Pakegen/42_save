/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:59:40 by qallain           #+#    #+#             */
/*   Updated: 2022/07/13 22:02:30 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>	

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;
	div = *a / *b	
	mod = *a % *b;
	*a = div;
	*b = mod;
}
