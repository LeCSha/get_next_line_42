/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:37:10 by abaille           #+#    #+#             */
/*   Updated: 2017/11/11 17:59:26 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t count;

	count = 0;
	while (src[count] && count < len)
	{
		dst[count] = src[count];
		count++;
	}
	while (count < len)
	{
		dst[count] = '\0';
		count++;
	}
	return (dst);
}
