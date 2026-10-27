# Atividade: Array (Vetor) em Linguagem C

## Identificação
* Estudante: Caio Oliveira Guimarães
* Curso: Análise e Desenvolvimento de Sistemas / Software Engineering

## Objetivo da Atividade
Desenvolver um programa em linguagem C para aplicar os conceitos de arrays (vetores), estruturas de repetição, estruturas condicionais, entrada de dados e operações matemáticas.

## Lógica Utilizada
1. Armazenamento: Utiliza um vetor de inteiros com capacidade para 20 posições, preenchido por meio de uma estrutura de repetição for com valores fornecidos pelo usuário via scanf.
2. Múltiplos de 3: Percorre o vetor verificando com o operador módulo (% 3 == 0) quais elementos são múltiplos de 3, acumulando a soma deles.
3. Média dos Pares: Identifica os números pares (% 2 == 0), soma-os e conta a quantidade. Caso exista pelo menos um número par, calcula a média dividindo a soma pela quantidade (evitando divisão por zero).
4. Positivos e Negativos: Conta quantos números são estritamente maiores que zero (positivos) e menores que zero (negativos), ignorando o número zero conforme os requisitos.
5. Maior e Menor: Compara cada elemento do vetor com variáveis auxiliares para encontrar os valores extremos (maior e menor).
6. Exibição Final: Imprime todos os resultados processados de forma organizada e lista o conteúdo completo do vetor.

## Como Compilar e Executar
Certifique-se de ter um compilador C instalado (como o GCC). No terminal, execute os seguintes comandos:

\`\`\`bash
# Compilar o código
gcc vetor_atividade.c -o programa

# Executar o programa
./programa
\`\`\`

## Exemplo de Entrada e Saída
*(Insira aqui um exemplo de como fica o terminal quando você digita os números e o programa mostra os resultados)*

## Captura de Tela
*(Cole aqui ou adicione a imagem do print da execução do seu programa funcionando no terminal)*
