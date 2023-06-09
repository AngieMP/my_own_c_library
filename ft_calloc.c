/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:50:38 by angmedin          #+#    #+#             */
/*   Updated: 2023/04/11 14:17:24 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*call;
	size_t	i;

	call = (void *) malloc (count * size);
	i = 0;
	if (!call)
		return (0);
	ft_bzero(call, (count * size));
	return (call);
}
