/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strljoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 17:22:18 by abaille           #+#    #+#             */
/*   Updated: 2018/01/08 14:24:40 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strljoin(char *s1, char *s2)
{
	char	*join;

	join = ft_strjoin(s1, s2);
	if (s1)
	{
		free(s1);
		s1 = NULL;
	}
	return (join);
}