/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:08:11 by abaille           #+#    #+#             */
/*   Updated: 2017/11/21 20:49:33 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	count;
	char	*dup;

	count = 0;
	if ((dup = (char *)malloc(sizeof(char) * (n + 1))) == NULL)
		return (NULL);
	while (count < n)
	{
		dup[count] = s1[count];
		count++;
	}
	dup[count] = '\0';
	return (dup);
}
