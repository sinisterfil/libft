/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbayram <hbayram@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:15:17 by hbayram           #+#    #+#             */
/*   Updated: 2024/10/25 11:15:18 by hbayram          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}
