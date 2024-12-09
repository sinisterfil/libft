/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbayram <hbayram@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:14:41 by hbayram           #+#    #+#             */
/*   Updated: 2024/10/25 11:14:43 by hbayram          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	finish;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen((char *)s);
	if (start > (slen))
		return (ft_strdup(""));
	finish = start + len;
	if (finish > slen)
		len = slen - start;
	newstr = malloc((len + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, (s + start), (len + 1));
	return ((char *)newstr);
}
