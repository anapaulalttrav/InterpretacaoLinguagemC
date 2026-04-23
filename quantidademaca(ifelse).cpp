//Maçãs custam R$0,30 cada se compradas menos de uma duzia, e R$0,25 se forem 12 ou mais

#include <stdio.h>
int main (){
	int macas;
	float total;
	printf("Digite a quantidade total de macas: ");
	scanf("%d",&macas);
	
	
	if (macas < 12){
		total = macas * 0.30;
	} else{
		total = macas * 0.25;
	}
	printf("Total da compra: R$ %.2f\n", total);
	return 0;
}
