/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:41:24 by dbruen            #+#    #+#             */
/*   Updated: 2019/08/15 11:41:25 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "format.h"

void	init_format(t_format *arg_format)
{
	ft_strcpy(arg_format->flag, "00000");
	arg_format->width = -1;
	arg_format->precision = -1;
	arg_format->size = '\0';
	arg_format->type = '\0';
}

int		is_empty(t_format *arg_format)
{
	if (ft_strcmp(arg_format->flag, "00000") != 0)
		return (0);
	if (arg_format->width != -1)
		return (0);
	if (arg_format->precision != -1)
		return (0);
	if (arg_format->size != '\0')
		return (0);
	if (arg_format->type != '\0')
		return (0);
	return (1);
}

void	print_format(t_format *arg_format)
{
	ft_putchar('\n');
	ft_putstr("flag: ");
	ft_putstr(arg_format->flag);
	ft_putstr("\nwidth: ");
	ft_putnbr(arg_format->width);
	ft_putstr("\nprecision: ");
	ft_putnbr(arg_format->precision);
	ft_putstr("\nsize: ");
	ft_putchar(arg_format->size);
	ft_putstr("\ntype: ");
	ft_putchar(arg_format->type);
	ft_putchar('\n');
}
