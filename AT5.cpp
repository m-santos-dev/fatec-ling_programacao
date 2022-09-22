#include <stdio.h>
 
main(){
 
	float vRaio, vArea, pi = 3.14, circunferencia;
	printf("Digite o Raio: ");
	scanf("%f", &vRaio);
 
	vArea = pi * (vRaio * vRaio);
	circunferencia = 2*pi*vRaio ;

	printf("\nA Area da circunferencia is: %.2f", (vArea));
	printf("\nO Comprimento da circunferencia is: %.2f", (circunferencia));
 
}
