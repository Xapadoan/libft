/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:27:26 by xapadoan          #+#    #+#             */
/*   Updated: 2018/11/27 17:27:28 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (s[i] != '\0' && s[i] != c && i < n)
		i++;
	if (c == s[i])
		return ((char *)(s + i));
	return (NULL);
}
