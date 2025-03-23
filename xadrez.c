#include <stdio.h>

void movtorre(int n){
        if (n>0){
                movtorre(n-1);//recursividade sendo aplicada antes para que o movimento seja impresso na ordem correta
                printf("%d. Direita\n", n); //para facilitar visualização, o contador de fluxo n é usado para numerar os movimentos
        }
}

void movbispo(int n){
        if (n>0){
                printf(" Direita\n");
                movbispo(n-1);
        }
}

void movrainha(int n){
        if (n>0){
                movrainha(n-1);//recursividade sendo aplicada antes para que o movimento seja impresso na ordem correta
                printf("%d. Esquerda\n", n); //para facilitar visualização, o contador de fluxo n é usado para numerar os movimentos
        }
}

int main() {
    printf("Movimento da Torre:\n"); //anunciando o movimento da torre
    movtorre(5); //chamando a função movtorre com o valor 5 para o movimento da torre

    printf("\n");

    printf("Movimento do Bispo:\n"); //anunciando o movimento do bispo
    for (int i = 1; i <= 5; i++)
    {
        printf("%d. Cima, ", i);//imprimindo movimento vertical no loop externo.
        movbispo(1); //movimento horizontal no loop interno. Isto pode ser considerado aninhado pois existe a recursividade dentro do for.
    }
    
    printf("\n");

    printf("Movimento da Rainha:\n"); //anunciando o movimento da rainha
    movrainha(8); //chamando a função movrainha com o valor 8 para o movimento da rainha

    printf("\n");
    
    printf("Movimento do Cavalo:\n");//anunciando o movimento do cavalo                             
    for (int i=1, j=1; i<=1 && j<=2; i++){ // utilizando mais de uma variável e condições
        while (j<=2){
                printf("%d. Cima\n", j); //para facilitar visualização, o contador de fluxo é usado para numerar os movimentos
                j++;
        }
        printf("%d. Direita\n", j); //para facilitar visualização, o contador de fluxo é usado para numerar os movimentos
    }

    return 0;
}