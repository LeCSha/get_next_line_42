/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:10:37 by abaille           #+#    #+#             */
/*   Updated: 2017/11/13 17:20:44 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*newstr;

	if (s == NULL || f == NULL)
		return (NULL);
	count = 0;
	if ((newstr = (char *)malloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	while (s[count])
	{
		newstr[count] = f(count, s[count]);
		count++;
	}
	newstr[count] = s[count];
	return (newstr);
}
