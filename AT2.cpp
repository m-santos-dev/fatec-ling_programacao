#include <stdio.h>

main(){

	float pes, alt, IMC;

	printf("Insira seu peso: ");
	scanf ("%f", & pes);
	
	printf("Insira sua altura em metros (ex: 1.70): ");
	scanf("%f", & alt);

	IMC = (pes / (alt*alt));
	printf("Seu IMC is: %f", IMC);	

	if(IMC<20.0){
		printf("\nSeu peso esta abaixo do padrao");			
	}
	else if(IMC>=20 && IMC<=25){
		printf("\nSeu peso esta normal");
	}
	else if(IMC>=25 && IMC<=30){
		printf(" \nSeu peso esta na categoria 'SOBRE PESO'! Cuidado com a alimentaçao, meu nobre");
	}	
	else if(IMC>=30 && IMC<=40){
		printf("\nSeu peso esta classificado como 'Obeso'!. Bora malhar?");
	}
	else if(IMC>40){
		printf("\nATENCAO: SEU PESO ESTA CLASSIFICADO COMO 'OBESIDADE MORBIDA'!");
	}
	else{
		printf("\nHouve algum erro! Por favor, entre em contato com um de nossos dev's atraves do canal...");
	}
}


