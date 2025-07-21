#include <stdio.h>

void moverTorre(int passo){
            if (passo > 5) return;
            printf("Passo %d: Direita\n", passo);
            moverTorre(passo + 1);
        }

void moverCavalo(){
    int cima = 0;

    for(int i =1; i <= 2; i++){
        printf("Passo %d: Cima\n", i);
        cima++;
        if (cima ==2){
            int direita = 0;
            while (direita < 1){
                printf("Passo 3: Direita\n");
                break;
            }
        }
    }
}

void moverBispo(int passo){
    if (passo > 5) return;

    for (int i = 0; i < 1; i++){ // vertical
        for (int j = 0; j < 1; j++) { // horizontal
            printf("Passo %d: Cima, Direita\n", passo);
        }
    }

    moverBispo(passo + 1);
}

void moverRainha(int passo){
    if (passo > 8) return;
    printf("Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1);
}

int main () {

    int escolha;

    printf("** XADREZ **\n"); // cabeçalho

    printf("Vamos começar! Escolha seu peão:\n");
    printf("1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha); 

    if(escolha == 1){
        printf("Você está jogando com a Torre!\n");
        moverTorre(1);

    } else if(escolha == 2){
        printf("Você está jogando com o Bispo!\n");
        moverBispo(1);
        
    } else if(escolha == 3){
        printf("Você está jogando com a Rainha!\n");
        moverRainha(1);

    } else if (escolha == 4){
        printf("Você está joganco com o cavalo!\n");
        moverCavalo();

    } else {
        printf("Opção inválida! \n");
    }


    return 0;
}