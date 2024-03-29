/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:21:29 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/09 11:31:17 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*needle)
		return ((char *)haystack);
	pos = 0;
	while (haystack[pos] != '\0' && (size_t)pos < n)
	{
		if (haystack[pos] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haystack[pos + i] == needle[i] &&\
					(size_t)(pos + i) < n)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[pos]);
		}
		pos++;
	}
	return (0);
}
