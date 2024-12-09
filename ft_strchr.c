/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbayram <hbayram@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:02:26 by hbayram           #+#    #+#             */
/*   Updated: 2024/10/25 11:10:39 by hbayram          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (*p)
	{
		if (*p == (unsigned char)c)
			return ((char *)p);
		p++;
	}
	if (*p == (unsigned char)c)
		return ((char *)p);
	return (NULL);
}
