#include <stdio.h>

int main(){
	int opcao;
	float num1, num2;
	
	printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\nEscolha: ");
	scanf("%d",&opcao);
	printf("Digite dois numeros: ");
	scanf("%f" "%f",&num1, &num2);
	
	switch(opcao){
		case 1: printf("Resultado: %.2f\n", num1+num2); break;
		case 2: printf("Resultado: %.2f\n", num1-num2); break;
		case 3: printf("Resultado: %.2f\n", num1*num2); break;
		case 4:
		if(num2 != 0) printf("Resultado: %.2f\n", num1 / num2);   //num2 tem que ser diferente de 0
            else printf("Erro: Divisao por zero.\n"); break;
        default: printf("Opcao invalida!\n");
	}
	return 0;
}
