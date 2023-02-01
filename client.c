/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:41:17 by amane             #+#    #+#             */
/*   Updated: 2023/02/01 13:47:30 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "./libft/libft.h"

void	enviar_bits(char c, int pin)
{
	int		i;

	i = 0;
	while (i <= 8)
	{
		usleep(250);
		if (c & (0x01 << i))
		{
			kill(pin, SIGUSR1);
		}
		else
		{
			kill(pin, SIGUSR2);
		}
		i ++;
	}
}

int	main(int argc, char **argv)
{
	int		pin;
	int		i;
	char	*str;

	i = 0;
	if (argc == 3)
	{
		str = ft_strdup(argv[1]);
		pin = ft_atoi(str);
		while (argv[2][i])
		{
			enviar_bits(argv[2][i], pin);
			i ++;
		}
		enviar_bits('\n', pin);
		free(str);
	}
	else
	{
		write(1, "Formato de parametro errado\n", 28);
		write(1, "Esperado: <PIN> <MENSAGEM>\n", 27);
	}
	return (0);
}
