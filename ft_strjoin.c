/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbayram <hbayram@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:12:06 by hbayram           #+#    #+#             */
/*   Updated: 2024/10/25 11:12:08 by hbayram          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len2 = ft_strlen(s2);
	len1 = ft_strlen(s1);
	new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new)
		return (NULL);
	while (i < (len1 + len2))
	{
		if (i < len1)
			new[i] = s1[i];
		else
		{
			new[i] = s2[j++];
		}
		i++;
	}
	new[(len1 + len2)] = '\0';
	return (new);
}
