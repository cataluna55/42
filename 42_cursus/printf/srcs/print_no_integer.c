/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_no_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 11:30:34 by mlebrun           #+#    #+#             */
/*   Updated: 2020/10/18 13:49:37 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_display_char(t_format *format_parsed, va_list arg)
{
	char	c;
	int		i;

	c = va_arg(arg, int);
	if (format_parsed->minus_flag == 1)
	{
		ft_putchar(c, format_parsed);
		i = 0;
		while (i < format_parsed->width - 1)
		{
			ft_putchar(' ', format_parsed);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < format_parsed->width - 1)
		{
			ft_putchar(' ', format_parsed);
			i++;
		}
		ft_putchar(c, format_parsed);
	}
}

void	ft_display_string(t_format *format_parsed, va_list arg)
{
	char	*str;
	int		size;
	int		i;

	str = va_arg(arg, char *);
	size = ft_strlength(str);
	if (format_parsed->minus_flag == 1)
	{
		ft_putstr(str, format_parsed);
		i = 0;
		while (i < format_parsed->width - size)
		{
			ft_putchar(' ', format_parsed);
			i++;
		}
	}
	else
	{
		i = -1;
		while (++i < format_parsed->width - size)
			ft_putchar(' ', format_parsed);
		ft_putstr(str, format_parsed);
	}
}

void	ft_display_addr(t_format *format_parsed, va_list arg)
{
	long int		addr;
	int				i;
	int				size;

	addr = (long int)va_arg(arg, long int);
	if (addr == 0)
		ft_putstr("(nil)", format_parsed);
	else
	{
		size = ft_size_hexa(addr);
		if (format_parsed->minus_flag == 1)
		{
			ft_putstr("0x", format_parsed);
			ft_putnbr_hexa_lower(addr, format_parsed);
			i = -1;
			while (++i < format_parsed->width - (size + 2))
				ft_putchar(' ', format_parsed);
		}
		else
		{
			i = -1;
			while (++i < format_parsed->width - (size + 2))
				ft_putchar(' ', format_parsed);
			ft_putstr("0x", format_parsed);
			ft_putnbr_hexa_lower(addr, format_parsed);
		}
	}
}
