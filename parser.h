/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:41:10 by dbruen            #+#    #+#             */
/*   Updated: 2019/08/20 15:42:03 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include <stdarg.h>
# include "format.h"

int	parse(char **args, t_format *arg_format, va_list ap);
int	parse_flag(char **arg, t_format *arg_format);
int	parse_precision(char **args, va_list ap, t_format *arg_format);
int	parse_width(char **args, va_list ap, t_format *arg_format);
int	parse_size(char **args, char *size);
int parse_type(char **args, t_format *arg_format);

#endif
