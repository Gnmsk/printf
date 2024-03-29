/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:38:38 by dbruen            #+#    #+#             */
/*   Updated: 2019/08/15 11:38:41 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRACT_H
# define EXTRACT_H

# define NUM_EXCTRACTOR 3
# define HEX_BASE 16
# define DEC_BASE 10
# define OCT_BASE 8
# define SNULL "(null)"
# define SPEC '@'

# include <stdarg.h>
# include <wchar.h>
# include "parser.h"

char				*str_to_utf(unsigned int *str);
char				*utf_code(unsigned int code, unsigned short size);
char				*extract_number(t_format *arg_format, va_list ap);
char				*extract_string(t_format *arg_format, va_list ap);
char				*extract_float(t_format *arg_format, va_list ap);
char				*apply_format(const char *str, t_format *arg_format);
char				*extract_symbol(t_format *arg_format, va_list ap);

#endif
