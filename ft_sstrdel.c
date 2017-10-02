/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sstrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cweather <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 15:25:08 by cweather          #+#    #+#             */
/*   Updated: 2017/09/29 15:26:30 by cweather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_sstrdel(char **s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_memdel((void *)&s[i++]);
	}
	ft_memdel((void *)&s);
}
