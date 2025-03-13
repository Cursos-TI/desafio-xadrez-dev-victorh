#include <stdio.h>

int main() {
    int j=1; //contador de fluxo para o loop do bispo, rainha e cavalo

    printf("Movimento da Torre:\n"); //anunciando o movimento da torre
    for (int i=1; i<=5; i++){ //controle de loop usando 'for' para garantir que o movimento seja feito 5 vezes
            printf("%d. Direita\n", i); //para facilitar visualização, o contador de fluxo é usado para numerar os movimentos
    }

    printf("\n");

    printf("Movimento do Bispo:\n"); //anunciando o movimento do bispo
    while (j<=5){ //controle de loop usando 'while' para garantir que o movimento seja feito 5 vezes
            printf("%d. Cima, Direita\n", j); //para facilitar visualização, o contador de fluxo é usado para numerar os movimentos
            j++;
    }

    j=1; //resetando o contador de fluxo
    printf("\n");

    printf("Movimento da Rainha:\n"); //anunciando o movimento da rainha
    do { //controle de loop usando 'do while' para garantir que o movimento seja feito 8 vezes
            printf("%d. Esquerda\n", j); //para facilitar visualização, o contador de fluxo é usado para numerar os movimentos
            j++;
    } while (j<=8);

    j=1; //resetando o contador de fluxo
    printf("\n");
    
    printf("Movimento do Cavalo:\n");//anunciando o movimento do cavalo
    for (int i=1; i<=1; i++){
        while (j<=2){
                printf("%d. Baixo\n", j); //para facilitar visualização, o contador de fluxo é usado para numerar os movimentos
                j++;
        }
        printf("%d. Esquerda\n", j); //para facilitar visualização, o contador de fluxo é usado para numerar os movimentos
    }

    return 0;
}