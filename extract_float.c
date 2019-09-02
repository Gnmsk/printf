/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_float.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:39:41 by dbruen            #+#    #+#             */
/*   Updated: 2019/08/15 11:40:28 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "extract.h"
#include "libft.h"
#include <stdarg.h>

void	ft_round_str(char *str, int last)
{
	while (--last >= 0)
	{
		if (str[last] >= '0' && str[last] < '9')
		{
			str[last]++;
			return ;
		}
		else if (str[last] == '9')
			str[last] = '0';
		else if (str[last] != '.')
			return ;
	}
}

char	*alloc_double(long double num, int precision)
{
	int						count;
	int						size;
	char					*str;
	unsigned long long int	ul_num;

	count = 0;
	if (num < 0)
		ul_num = (unsigned long long)(-num);
	else
		ul_num = (unsigned long long)num;
	while (1)
	{
		ul_num /= 10;
		count++;
		if (!ul_num)
			break ;
	}
	size = count + precision + 1;
	size = (precision > 0) ? size + 1 : size;
	str = ft_strnew(size);
	return (str);
}

char	*extract_double(long double num, int precision)
{
	char			*int_part;
	char			*str;
	int				i;

	str = alloc_double(num, precision);
	i = 0;
	if (num < 0)
		str[i++] = '-';
	num = (num < 0) ? -num : num;
	int_part = ft_ultoa((unsigned long long)num);
	ft_memcpy(str + i, int_part, ft_strlen(int_part));
	i += ft_strlen(int_part);
	ft_strdel(&int_part);
	if (precision > 0)
		str[i++] = '.';
	while (precision--)
	{
		str[i++] = '0' + (unsigned long long)(num * 10) % 10;
		num *= 10;
	}
	if ((unsigned long long)(num * 10) % 10 > 5)
		ft_round_str(str, i);
	return (str);
}

char	*extract_float(t_format *arg_format, va_list ap)
{
	char		*str;
	long double	num;

	str = NULL;
	if (arg_format->type == 'f')
	{
		if (arg_format->precision == -1)
			arg_format->precision = 6;
		if (arg_format->size == 'L')
		{
			num = va_arg(ap, long double);
			str = extract_double(num, arg_format->precision);
		}
		else
		{
			num = va_arg(ap, double);
			str = extract_double(num, arg_format->precision);
		}
		return (apply_format(str, arg_format));
	}
	return (str);
}
