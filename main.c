#include <stdio.h>

int main(void)
{
    char inizialenome;
    int eta;
    printf("Inserisci l'iniziale del tuo nome: ");
    scanf("%c", &inizialenome);
    printf("Inserisci la tua età: ");
    scanf("%d", &eta);
    if (eta = 18)
    {
        printf("%c è maggiorenne", inizialenome);
    }
    else
    {
        printf("%c non è maggiorenne", inizialenome);
    }
    return 0;
}
