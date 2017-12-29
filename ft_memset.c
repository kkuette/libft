/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 16:20:09 by tdenion           #+#    #+#             */
/*   Updated: 2016/02/02 16:15:53 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		((char*)b)[i++] = (unsigned char)c;
	return (b);
}
