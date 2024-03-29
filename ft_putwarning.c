/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwarning.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 15:12:01 by xapadoan          #+#    #+#             */
/*   Updated: 2019/03/19 15:12:02 by xapadoan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwarning(const char *message)
{
	ft_putstr("\033[01;33mWarning :\033[01;0m ");
	ft_putendl(message);
}
