# include "./libft/libft.h"

void fun_ler(int sinal)
{
    static int i;
    static int b;
    if (SIGUSR1 == sinal)
    {
        i = i | (0x01 << b);
    }
    b ++;
    if(b == 8)
    {
        write(1, &i, 1);
        i = (0x00);
        b = 0;
    }
}



int main()
{
	int pin;

	pin = getpid();
	ft_printf("%i\n", pin);
	while(1)
	{   
		signal(SIGUSR1, fun_ler);
		signal(SIGUSR2, fun_ler);
		pause();
	}
	return (0);
}
