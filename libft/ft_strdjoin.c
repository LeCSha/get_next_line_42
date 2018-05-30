/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 17:10:23 by abaille           #+#    #+#             */
/*   Updated: 2018/01/08 14:25:25 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdjoin(char *s1, char *s2)
{
	char *new;

	new = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		new = ft_strjoin(s1, s2);
		free(s1);
		free(s2);
		s1 = NULL;
		s2 = NULL;
	}
	return (new);
}
