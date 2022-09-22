#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao, n1, n2;
		
	do{
		printf("\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n0 - Sair\n\n");
		scanf("%d", & opcao);
		
		if(opcao > 0 && opcao < 5){
			printf("Digite dois valores: ");
			scanf("%d%d", &n1, &n2);
		}
					
		switch (opcao) {
		case 0:
			printf("Saindo...\n");
			break;
		case 1:
			printf("Soma: %d\n", n1 + n2);
			break;
		case 2:
			printf("Subtracao: %d\n", n1 - n2);
			break;
		case 3:
			printf("Multiplicação: %d\n", n1*n2);
			break;
		case 4:
			while(n2 == 0) {
				printf("Não dividirás por 0");
				scanf("%d", & n2);
			}
		printf("Divisão: %d\n", n1/n2);
		break;
	default:
		printf("Opção Inválida. \nDigite outra opação: ");
	
	}
} while(opcao != 0);
}
