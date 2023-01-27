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
    if(b == 7)
    {
        write(1, &i, 1);
        i = (0x00);
        b = 0;
    }
}



int main()
{
    ft_printf("%i\n", getpid());
    while(1)
    {   
        signal(SIGUSR1, fun_ler);
        signal(SIGUSR2, fun_ler);
        pause();
    }
    return (0);
}