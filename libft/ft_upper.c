/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfrost-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:40:23 by variya            #+#    #+#             */
/*   Updated: 2019/06/29 17:10:12 by dfrost-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_upper(char *str)
{
	char	*c;

	c = str;
	while (*c)
	{
		if ((*c > 'a') && (*c <= 'z'))
			*c = *c - ('A' - 'a');
		c++;
	}
	return (str);
}
