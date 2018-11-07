/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicosia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:09:45 by lnicosia          #+#    #+#             */
/*   Updated: 2018/11/07 11:50:00 by lnicosia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	
	ft_putstr("This is a test for my own libft (seems like putchar and putstr are working)\n\nputnbr:\n\n");
	ft_putnbr(-2147483648); ft_putchar('\n');
	ft_putnbr(2147483647); ft_putchar('\n');
	ft_putnbr(0); ft_putchar('\n');
	ft_putnbr(24);
	
	ft_putstr("\n\n");
	return (0);
}
