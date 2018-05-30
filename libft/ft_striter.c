/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:09:12 by abaille           #+#    #+#             */
/*   Updated: 2017/11/13 13:29:10 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		count;

	if (s == NULL || f == NULL)
		return ;
	count = 0;
	while (s[count])
	{
		f(&s[count]);
		count++;
	}
}
