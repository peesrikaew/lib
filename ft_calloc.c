/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndod <ndod@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:22:06 by ndod              #+#    #+#             */
/*   Updated: 2023/09/11 16:04:50 by ndod             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size == SIZE_MAX && count == SIZE_MAX)
		return (0);
	if (size == 0 || count == 0)
		return (malloc(0));
	if (size < 0)
		return (0);	
	p = malloc(count * size);
	if (!p)
		return (0);	
	ft_bzero(p, count * size);
	return (p);
}
