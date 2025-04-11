#include <stdio.h>

int main() {
    int i = 0, soma = 0, maior = 0, posicao = 0, notas[10];
    printf("--------Sistema de Notas----------\n");
    
    for (i = 0; i < 10; i++) {
        printf("Digite sua nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    maior = notas[0];
    posicao = 1; 
    for (i = 1; i < 10; i++) {
        if (maior < notas[i]) {
            maior = notas[i];
            posicao = i + 1; 
        }
    }

    // Exibindo as notas em formato de grade com tabela lateral
    printf("\nNotas em formato de grade:\n");
    printf("----------------------------\n");
    printf("| Posição | Nota |\n");
    printf("----------------------------\n");
    for (i = 0; i < 10; i++) {
        printf("|   %d    |  %d  |\n", i + 1, notas[i]);
    }
    printf("----------------------------\n");

    printf("\nSoma das Notas: %d", soma);
    printf("\nMaior Nota: %d na posição: %d\n", maior, posicao);
    
    return 0;
}