/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:45:14 by abaille           #+#    #+#             */
/*   Updated: 2017/11/20 17:13:59 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	count;

	count = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	else
		while (haystack[count])
		{
			if (ft_strncmp(&haystack[count], needle, ft_strlen(needle)) == 0)
				return ((char *)&haystack[count]);
			count++;
		}
	return (NULL);
}
