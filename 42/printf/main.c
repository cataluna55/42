/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Math <Math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 00:07:48 by mlebrun           #+#    #+#             */
/*   Updated: 2020/10/18 19:47:38 by Math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"
#include "libft/libft.h"
void	ft_putcharr(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr_hexa_lower2(long int nb)
{
	char	hexa[16];
	int		i;
	int		j;

	i = 0;
	while (i < 10)
	{
		hexa[i] = '0' + i;
		i++;
	}
	j = 0;
	while (j < 6)
	{
		hexa[i] = 'a' + j;
		j++;
		i++;
	}
	hexa[i] = '\0';
	if (nb >= 16)
	{
		ft_putnbr_hexa_lower2(nb / 16);
		ft_putcharr(hexa[nb % 16]);
	}
	else
		ft_putcharr(hexa[nb % 16]);
}

int		main(int argc, char **argv)
{
	(void)argc;
	int		a = 6;


	/*
printf("LETk'S TEST THAT LITTLE BABY\n\n\n");
	printf("INT:\n\n");
	printf("EXPECTED      : %d\n", 667);
	ft_printf("YOUR FUNCTION : %d\n", 667);
	
	printf("EXPECTED      : %05d\n", 55);
	ft_printf("YOUR FUNCTION : %05d\n", 55);
	printf("EXPECTED      : %-6d\n", 3);
	ft_printf("YOUR FUNCTION : %-6d\n", 3);
	printf("EXPECTED      : %*d\n", 7, 50);
	ft_printf("YOUR FUNCTION : %*d\n", 7, 50);
	printf("EXPECTED      : %-2.5d\n", 6);
	ft_printf("YOUR FUNCTION : %-2.5d\n", 6);
	printf("EXPECTED      : %56d\n", 2);
	ft_printf("YOUR FUNCTION : %56d\n", 2);
	printf("EXPECTED      : %07.4d\n", 8);
	ft_printf("YOUR FUNCTION : %07.4d\n", 8);
	printf("EXPECTED      : %.*d\n", 6, 6);
	ft_printf("YOUR FUNCTION : %.*d\n", 6, 6);
	printf("EXPECTED      : %05.3d\n", 9);
	ft_printf("YOUR FUNCTION : %05.3d\n", 9);
	printf("EXPECTED      : %0\*.\*d\n", 9, 9, 3);
	ft_printf("YOUR FUNCTION : %0\*.\*d\n", 9, 9, 3);
	printf("EXPECTED      : %03d %5d\n", 5, 6);
	ft_printf("YOUR FUNCTION : %03d %5d\n", 5, 6);
	printf("CHAR :\n\n");
	printf("EXPECTED      : %c %3c\n", 'c', 'u');
	ft_printf("YOUR FUNCTION : %c %3c\n", 'c', 'u');
	printf("POINTER :\n\n");
	printf("EXPECTED      : %p %20p\n", &a, &a);
	ft_printf("YOUR FUNCTION : %p %20p\n", &a, &a);
	printf("STRING :\n\n");
	printf("EXPECTED      : %s %10s\n", "oui", "non");
	ft_printf("YOUR FUNCTION : %s %10s\n", "oui", "non");
	printf("EXPECTED      : %s %10s\n", "oui", "non");
	ft_printf("YOUR FUNCTION : %s %10s\n", "oui", "non");
	printf("EXPECTED      : %020u \n", 4294967295);
	ft_printf("YOUR FUNCTION : %020u \n", 4294967295);
	printf("EXPECTED      : %020x \n", 123456);
	ft_printf("YOUR FUNCTION : %020x \n", 123456);
	printf("EXPECTED      : %-20X \n", 523698);
	ft_printf("YOUR FUNCTION : %-20X \n", 523698);
	printf("EXPECTED      : %0.16X \n", 159784);
	ft_printf("YOUR FUNCTION : %0.16X \n", 159784);
*/
	printf("|%*.*d|\n", 0, 6, -2147483648);
	ft_printf("|%*.*d|\n", 0, 6, -2147483648);
	printf("|%*.*d|\n", 0, 6, -2147483648);
	ft_printf("|%*.*d|\n", 0, 6, -2147483648);
	printf("|%*.*d|\n", 0, 6, -2147483648);
	ft_printf("|%*.*d|\n", 0, 6, -2147483648);
	printf("|%*.*d|\n", 15, -6, -2147483648);
	ft_printf("|%*.*d|\n", 15, -6, -2147483648);
	return (0);
}