/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:03:39 by abaille           #+#    #+#             */
/*   Updated: 2017/11/20 11:08:51 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*alloc;

	if (size == 0 || (alloc = (void *)malloc(size)) == NULL)
		return (NULL);
	ft_bzero(alloc, size + 2);
	return (alloc);
}
