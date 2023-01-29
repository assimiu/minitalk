# include "./libft/libft.h"

void enviar_bits(char c, int pin)
{
	int i = 0;
	while(i <= 7)
	{
		if (c & (0x01 << i))
		{
			kill(pin, SIGUSR1);
		}
		else
		{
			kill(pin, SIGUSR2);
		}
		usleep(100);
		i ++;
	}
}

int main(int argc, char **argv)
{
	int	pin;
	int	i;
	char	*str;

	i = 0;
	if (argc == 3)
	{
		str = argv[1];
		pin = ft_atoi(str);
		while(argv[2][i])
		{
			enviar_bits(argv[2][i], pin);
			i ++;
		}
		enviar_bits('\n', pin);
	}
	else
	{
		write(1, "Formato de parametro errado\n", 28);
		write(1, "Esperado: <PIN> <MENSAGEM>\n", 27);
	}
	return (0);
}
