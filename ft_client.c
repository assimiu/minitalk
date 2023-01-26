# include "libft/libft.h"

void enviar_bits(char c)
{
    int i = 0;
    while(i <= 6)
    {
        if (c & (0x01 << i))
        {
            kill(281111, SIGUSR1);
        }
        else
        {
            kill(281111, SIGUSR2);
        }
        usleep(100);
        i ++;
    }
}

int main()
{
    char *str = "ola mundo";
    int i = 0;
    while(str[i])
    {
        enviar_bits(str[i]);
        i ++;
    }
    
    return (0);
}