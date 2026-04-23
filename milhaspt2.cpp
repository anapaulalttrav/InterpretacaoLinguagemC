 //Escreva um programa que leia uma distância em milhas. 
 //Converta para quilômetros usando a fórmula K = 1,61 * M
 //Bônus: Garanta que o resultado seja impresso com apenas 2 casas decimais.
 
 #include <stdio.h>
 int main(){
	float milhas, km;
	printf("Distancia em milhas: ");	
	scanf("%f", &milhas);
	km = 1.61 * milhas;
	printf("%.2f milhas equivalem a %.2f km", milhas, km);
	return 0;
 }
