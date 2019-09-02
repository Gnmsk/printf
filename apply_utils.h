/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:38:20 by dbruen            #+#    #+#             */
/*   Updated: 2019/08/15 11:38:22 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APPLY_UTILS_H
# define APPLY_UTILS_H

# include "format.h"

void	permutation(char *res, const char *new_str, t_format *arg_format);
void	apply_prefix(t_format *arg_format, char *res, int prefix,
		const char *str);
int		get_sign(const char *str, t_format *arg_format);
int		len_hex(const char *str, char type, t_format *arg_format);
void	cast_big_types(t_format *arg_format);

#endif
