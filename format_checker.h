/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_checker.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:42:22 by dbruen            #+#    #+#             */
/*   Updated: 2019/08/20 15:42:42 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_CHECKER_H
# define FORMAT_CHECKER_H

int	is_flag(char c);
int	is_size(char c);
int	is_type(char c);
int	is_valid(char c);
int	accumulate_digit(int *res, char c);

#endif
