#include <stdio.h>

int main () {

    int escolha;

    printf("** XADREZ **\n"); // cabeçalho

    printf("Vamos começar! Escolha seu peão:\n");
    printf("1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha); 

    if(escolha == 1){
        printf("Você está jogando com a Torre!\n");
        printf("Movimento da torre: \n");
        //FOR - cinco casas para a direita

        int i;
        for(i = 1; i <=5; i++){
            printf("Direita\n", i);
        }

    } else if(escolha == 2){
        printf("Você está jogando com o Bispo!\n");
        printf("Movimento do bispo: \n");
        //WHILE - cinco casas para cima e direita em diagonal

        int i = 1;
        while (i <= 5)
        {
        printf("Cima, direita\n", i);
        i++;
        }
        
    } else if(escolha == 3){
        printf("Você está jogando com a Rainha!\n");
        printf("Movimento da rainha: \n");
        //DO-WHILE - oito casas para esquerda em todas as direções
        
        int i = 1;
        do
        {
        printf("Esquerda\n", i);
            i++;
        } while (i <= 8);

    } else if (escolha == 4){
        printf("Você está joganco com o cavalo!\n");
        printf("Movimento do cavalo: \n");

        for(int i =1; i <= 2; i++){
            printf("Baixo\n", i);
        }
        
        int j = 1;
        while(j <= 1){
            printf("Esquerda\n", j);
            j++;
        }

    } else {
        printf("Opção inválida! \n");
    }

    


    return 0;
}