/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaille <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:33:15 by abaille           #+#    #+#             */
/*   Updated: 2017/11/11 17:52:05 by abaille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int count;

	count = 0;
	while (src[count])
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = src[count];
	return (dst);
}
