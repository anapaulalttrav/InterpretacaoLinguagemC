#include <stdio.h>

int main (){
	int senha;
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	if (senha == 1234) {
		printf("Acesso Permitido\n");
	}else{
		printf("Acesso Negado\n");
	}
	return 0;
}
