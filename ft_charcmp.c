/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 15:56:05 by tdenion           #+#    #+#             */
/*   Updated: 2016/02/10 16:27:10 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_charcmp(unsigned char cmp, unsigned char src)
{
	int i;

	i = 0;
	if (src != cmp)
		i = cmp - src;
	return (i);
}
