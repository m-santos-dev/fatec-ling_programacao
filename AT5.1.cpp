#include<stdio.h>
 
int main()
{
	// Declara��o das vari�veis
	float raio, pi=3.14, area;
	
	// Entrada de dados
	printf("RAIO = "); 
	scanf("%f", &raio);
 
	// C�lculo da �rea da circunfer�ncia
	area = pi * raio * raio;
 
	// Apresenta��o do resultado
	printf("AREA = %.2f m2 \n", area);
 
		return 0;
}
