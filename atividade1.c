#include <stdio.h>

int main(){
int opcao;
printf("Digite um numero de 1 a 9\n");
scanf("%d", &opcao);	
while(opcao != 0){
	if(opcao < 1 || opcao > 9){
		printf("Opcao invalida!\n");
	}
	printf("Digite um numero de 1 a 9\n");
	scanf("%d", &opcao);
}
printf("tchau!\n");
}
