#include <stdio.h>

int main() {
    // Declaração do vetor com 20 posições para números inteiros
    int vetor[20];
    int i;
    
    // Variáveis para os cálculos
    int somaMultiplos3 = 0;
    int somaPares = 0;
    int qtdPares = 0;
    int qtdPositivos = 0;
    int qtdNegativos = 0;
    int maior, menor;

    // 1. Leitura e armazenamento dos 20 números digitados pelo usuário
    printf("=== Digite 20 números inteiros ===\n");
    for (i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializando maior e menor com o primeiro elemento do vetor
    maior = vetor[0];
    menor = vetor[0];

    // 2. Processamento dos dados do vetor
    for (i = 0; i < 20; i++) {
        int atual = vetor[i];

        // Verifica se é múltiplo de 3 (resto da divisão por 3 é igual a 0)
        if (atual % 3 == 0) {
            somaMultiplos3 += atual;
        }

        // Verifica se é par
        if (atual % 2 == 0) {
            somaPares += atual;
            qtdPares++;
        }

        // Conta positivos e negativos (o zero não é contabilizado em nenhum dos dois)
        if (atual > 0) {
            qtdPositivos++;
        } else if (atual < 0) {
            qtdNegativos++;
        }

        // Verifica o maior valor
        if (atual > maior) {
            maior = atual;
        }

        // Verifica o menor valor
        if (atual < menor) {
            menor = atual;
        }
    }

    // 3. Apresentação dos resultados de forma organizada
    printf("\n========================================\n");
    printf("          RESULTADOS DA ANÁLISE         \n");
    printf("========================================\n");

    // Soma dos múltiplos de 3
    printf("-> Soma dos elementos múltiplos de 3: %d\n", somaMultiplos3);

    // Média dos elementos pares (com tratamento para evitar divisão por zero)
    if (qtdPares > 0) {
        float mediaPares = (float)somaPares / qtdPares;
        printf("-> Média dos elementos pares: %.2f\n", mediaPares);
    } else {
        printf("-> Média dos elementos pares: Nenhum número par foi digitado.\n");
    }

    // Quantidade de positivos e negativos
    printf("-> Quantidade de números positivos: %d\n", qtdPositivos);
    printf("-> Quantidade de números negativos: %d\n", qtdNegativos);

    // Maior e menor valor
    printf("-> Maior valor do vetor: %d\n", maior);
    printf("-> Menor valor do vetor: %d\n", menor);

    // Exibição de todos os elementos armazenados no vetor
    printf("\n-> Elementos armazenados no vetor:\n[ ");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]\n");
    printf("========================================\n");

    return 0;
}
