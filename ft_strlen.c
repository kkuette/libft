/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 15:15:51 by tdenion           #+#    #+#             */
/*   Updated: 2016/04/01 18:17:16 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	if (!str)
		return (len);
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
