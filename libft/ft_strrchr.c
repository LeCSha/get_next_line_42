/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:44:40 by abaille           #+#    #+#             */
/*   Updated: 2017/11/11 17:35:08 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	int		pos;

	count = 0;
	pos = -1;
	if (c == 0)
		pos = (int)ft_strlen(s);
	while (s[count])
	{
		if (s[count] == (char)c)
			pos = count;
		count++;
	}
	return (pos == -1 ? NULL : (char *)&s[pos]);
}
