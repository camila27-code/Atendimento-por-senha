/*
 * Programa do atendente (Duplas D e B): chama a proxima senha, mostra a fila
 * e roda a demonstracao fila linear x circular.
 * Compilar: gcc -Wall atendente.c fila.c armazenamento.c -o atendente
 */
#include <stdio.h>
#include "fila.h"
#include "armazenamento.h"

/* D-01 / D-02 / D-03: demonstracao em memoria, NAO mexe em fila.dat.
   Roteiro (TAM = 5): enfileira 1..5, desenfileira 3x, tenta enfileirar 6, chama a proxima. */
static void demonstracao(void) {
    /* TODO (Dupla B) */
    printf("TODO: demonstracao linear x circular\n");
}

int main(void) {
    int opcao;

    do {
        printf("\n=== ATENDENTE ===\n");
        printf("1 - Chamar proxima\n");
        printf("2 - Ver fila\n");
        printf("3 - Demonstracao linear x circular\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        if (scanf("%d", &opcao) != 1) break;

        switch (opcao) {
        case 1:
        {
            /* TODO (I-03, depois I-05): travar -> carregar -> desenfileirar -> salvar -> destravar */
            Fila f;
            int senha_chamada;

            travar();
            carregar_fila(&f);

            senha_chamada = desenfileirar(&f);

            if (senha_chamada != -1)
            {
                printf("Senha chamada: %d\n", senha_chamada);
                salvar_fila(&f);
            }
            else
            {
                printf("\nFila vazia! Nenhuma senha para chamar.\n");
            }
            destravar();

            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("\nPressione ENTER para voltar ao menu.");
            getchar();

#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
            break;
        }

        case 2:
            /* TODO (I-04): mostrar vetor, inicio, fim e qtd */
            printf("TODO: ver fila\n");
            break;
        case 3:
            demonstracao();
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
