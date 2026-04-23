//Faça um programa que receba três valores inteiros do usuário, calcule a soma e, 
//antes de imprimir o resultado, utilize um operador de pós-incremento na variável da soma.
// O que será impresso?

#include <stdio.h>

int main (){
	int n1, n2, n3, soma;
	printf("Digite tres valores: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	soma = n1+n2+n3;
	printf("Soma Original: %d\n", soma++);
	printf("Soma com Incremento: %d\n", soma);
	return 0;
	
}
