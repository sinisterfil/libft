/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbayram <hbayram@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:57:53 by hbayram           #+#    #+#             */
/*   Updated: 2024/10/25 10:57:55 by hbayram          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	c = (unsigned char)c;
	while (n && *s != c)
	{
		++s;
		--n;
	}
	if (n)
		return ((void *)s);
	else
		return (NULL);
}
