#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    char *n_random[] = {"Abobora","Fantasma","Punk Style"};
    int random = rand() % 3;
    char *escolha = n_random[random];
    char letra;

    printf("A palavra aleatoria e: %s\n",escolha);

    printf("Digite uma letra para tentar advinhar a palavra");
    scanf("%c",letra);

    int encontrada = 0;

    for (int i=0; i < strlen(escolha);i++){
        if (escolha[i] == letra || escolha[i] == letra - 32 || escolha[i] == letra + 32) {
            encontrada = 1;
            break;
        }
    }

    if (encontrada){
        printf("\nPalavra encontrada");
    } else {
        printf("\nPalavra não encontrada");
    }

    return 0;
}
