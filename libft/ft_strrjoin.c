/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 17:13:04 by abaille           #+#    #+#             */
/*   Updated: 2018/01/08 14:24:55 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrjoin(char *s1, char *s2)
{
	char	*new;

	new = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		new = ft_strjoin(s1, s2);
		free(s2);
		s2 = NULL;
	}
	return (new);
}
