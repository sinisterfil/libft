/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbayram <hbayram@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:06:49 by hbayram           #+#    #+#             */
/*   Updated: 2024/10/15 13:10:51 by hbayram          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cal_digit_num(long n)
{
	int	digit_num;

	digit_num = 0;
	if (n < 0)
	{
		digit_num += 1;
		n *= -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		digit_num++;
	}
	return (digit_num);
}

char	*ft_itoa(int num)
{
	int		digit_num;
	char	*res;
	long	n;

	n = (long)num;
	digit_num = cal_digit_num(num);
	res = malloc((digit_num + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[digit_num] = '\0';
	if (num == 0)
		res[0] = '0';
	else if (num < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		res[--digit_num] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
