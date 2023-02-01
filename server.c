/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:44:02 by amane             #+#    #+#             */
/*   Updated: 2023/02/01 13:46:08 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "./libft/libft.h"

void	fun_ler(int sinal)
{
	static int	i;
	static int	b;

	if (SIGUSR1 == sinal)
	{
		i = i | (0x01 << b);
	}
	b ++;
	if (b == 9)
	{
		write(1, &i, 1);
		i = 0;
		b = 0;
	}
}

int	main(void)
{
	int		pin;

	pin = getpid();
	ft_printf("%i\n", pin);
	while (1)
	{
		signal(SIGUSR1, fun_ler);
		signal(SIGUSR2, fun_ler);
		pause();
	}
	return (0);
}
