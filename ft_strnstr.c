/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbayram <hbayram@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:14:01 by hbayram           #+#    #+#             */
/*   Updated: 2024/10/25 11:14:03 by hbayram          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	if (!(*tofind))
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i] == tofind[j])
		{
			p = i;
			while (str[i] == tofind[j] && str[i] && i < len)
			{
				i++;
				j++;
			}
			if (!tofind[j])
				return ((char *)str + p);
			i = p;
		}
		i++;
	}
	return (NULL);
}
