#include <unistd.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>



void fun_ler(int sinal)
{
    static int i;
    static int b;
    if (SIGUSR1 == sinal)
    {
        i = i | (0x01 << b);
    }
    b ++;

    printf("%i\n", b);
    if(b == 8)
    {
        printf("%c", i);
        i = 0;
        b = 0;
    }
    printf("%i\n", i );
    i ++;
}



int main(int argc, char **argv)
{
    printf("%i\n", getpid());
    while(1)
    {
        signal(SIGUSR1, &fun_ler);
        signal(SIGUSR2, &fun_ler);
        usleep(100);
    }
    return (0);
}