#include <stdio.h>
//O Problema: Um sistema de sensor de temperatura recebe dois valores inteiros (temp1 e temp2). 
//Você deve calcular a média exata (com casas decimais).
//Use o pós-incremento em uma variável chamada leituras para contar quantas temperaturas foram processadas (começando em 0).
//Restrição: Use um bloco de código { } isolado para declarar uma variável temporária de cálculo que não deve existir no restante do programa (teste de escopo).

int main() {
    // 1. Recebendo os valores inteiros
    int temp1 = 25;
    int temp2 = 28;
    int leituras = 0; // Começa em 0
    float media;

    {
        // Esta variável 'soma' só existe aqui dentro!
        int soma = temp1 + temp2;
        
        // Contando as temperaturas usando pós-incremento
        // O valor de 'leituras' é usado (0) e depois vira 1, depois vira 2.
        leituras++; 
        leituras++;

        // 3. Calculando a média exata
        // Aqui está o segredo: usamos (float) para forçar a divisão real
        media = (float)soma / leituras;
        
        printf("Calculo realizado dentro do bloco.\n");
    } 

    // Se tentássemos usar 'soma' aqui fora, o código daria erro de compilação!
    
    // 4. Exibindo os resultados
    printf("Total de leituras processadas: %d\n", leituras);
    printf("A media exata eh: %.2f\n", media);

    return 0;
}
