/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 17:44:23 by abaille           #+#    #+#             */
/*   Updated: 2017/11/20 17:46:06 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_capitalize(char *s)
{
	size_t	count;

	count = 0;
	if (s != NULL)
		while (s[count])
		{
			s[count] = ft_toupper(s[count]);
			count++;
		}
}
