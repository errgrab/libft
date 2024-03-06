/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarvalh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:37 by ecarvalh          #+#    #+#             */
/*   Updated: 2024/03/06 14:07:32 by ecarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

/* Conversions */
# define CNV "cspdiuxX%"
# define FLG "-0# +"
# define FLL 6

/* Bases */
# define DEC "0123456789"
# define LHX "0123456789abcdef"
# define UHX "0123456789ABCDEF"

/* Types */
typedef struct s_arg	t_arg;
struct s_arg
{
	char	cnv;
	char	flg[FLL + 1];
	int		flp;
	int		wid;
	int		prc;
	int		len;
};

/* <'-' > */
int		ft_printf(const char *format, ...);

/* Lib */
int		ft_based(size_t n, char *base); /* BASED */
int		ft_nbrlen(size_t nbr, int base_len);

/* Eval */
int		ft_eval(va_list args, const char *fmt, int *j);

/* ConvFun */
void	ft_chr(va_list args, t_arg *a); /* char        */
void	ft_str(va_list args, t_arg *a); /* string      */
void	ft_ptr(va_list args, t_arg *a); /* pointer     */
void	ft_dig(va_list args, t_arg *a); /* digit       */
void	ft_uns(va_list args, t_arg *a); /* unsigned    */
void	ft_hxl(va_list args, t_arg *a); /* hex lower   */
void	ft_hxu(va_list args, t_arg *a); /* hex upper   */
void	ft_def(va_list args, t_arg *a); /* default (%) */

#endif
