/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-oliv <sde-oliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:02:09 by sde-oliv          #+#    #+#             */
/*   Updated: 2024/12/26 18:17:40 by sde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int		ret;

	ret = 10;
	ret = ft_printf("\nft_printf %%\\ %c %s %p", 'S', "Sid", &ret);
	printf("           ft_printf return : %d\n", ret);
	ret = ft_printf("second %d %i %u %x %X", -42, -42, -42, -1000, -100000);
	printf(" ft_printf return : %d\n", ret);

	ret =    printf("\n---printf %%\\ %c %s %p", 'S', "Sid", &ret);
	printf("           ---printf return : %d\n", ret);
	ret =    printf("second %d %i %u %x %X", -42, -42, -42, -1000, -100000);
	printf(" ---printf return : %d\n", ret);
	printf("\n");

	int		result;
	char	*s = NULL;
	ft_printf("%p\n", s);

	ft_printf("%s\n", s);
	ft_printf("%s\n", NULL);
	ft_printf("hi my name is %s and i m %i years, in hexadecimal %x, address : %p\n", "Matheus", 25, 25, &"Matheus");
	ft_printf("%s\n", "");
	ft_printf("%i\n", -2147483648);
	result = ft_printf("%%");
	printf("FT -> %i\n", result);
	result = printf("%%");
	printf("PF -> %i\n", result);
	result = ft_printf(NULL);
	printf("FT -> %i\n", result);
	result = printf(NULL);
	printf("PF -> %i\n", result);
	result = ft_printf("");
	printf("FT -> %i\n", result);
	result = printf("");
	printf("PF -> %i\n", result);
}
