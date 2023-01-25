#include <unistd.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>


void enviar_bits(char c)
{
    int i = 7;

    while(i >= 0)
    {
        if (c & (0x01 << i))
        {
            kill(226584, SIGUSR1);
            printf("1");
        }
        else
        {
            kill(226584, SIGUSR2);
            printf("0");
        }
        usleep(20);
        i --;
    }
}

int main()
{
    char *str = "B";
    int i = 0;
    while(str[i])
    {
        enviar_bits(str[i]);
        usleep(1000);
        i ++;
    }
    












    /*
    struct sigaction action;
    action.sa_handler = handler;


    sigemptyset(&action.sa_mask);
    sigaction(SIGINT, &action, NULL);

    while(1)
    {
        if (sigaction(SIGINT, &action, NULL) == -1)
        {
            printf("LOLA\n");
        }
        sleep(1);
    }
    */
    
    return (0);
}