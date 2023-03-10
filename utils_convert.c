/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_convert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctoptas <ctoptas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:22:47 by ctoptas           #+#    #+#             */
/*   Updated: 2023/01/29 14:23:33 by ctoptas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_talk.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_power(int n, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (n);
	else if (power < 0)
		return (0);
	while (power > 0)
	{
		res = n * res;
		power--;
	}
	return (res);
}

int	convert_decimal(int *array)
{
	int	i;
	int	num;
	int	j;

	i = 7;
	j = 0;
	num = 0;
	while (i >= 0)
	{
		num += array[i] * ft_power(2, j);
		j++;
		i--;
	}
	return (num);
}

int	*convert_binary(int n)
{
	int	*arr;
	int	i;

	i = 7;
	arr = ft_calloc(8, sizeof(int *));
	if (!arr)
		return (0);
	while (i >= 0)
	{
		arr[i--] = n % 2;
		n /= 2;
	}
	return (arr);
}
