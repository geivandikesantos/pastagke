#include <stdio.h>
#include <stdlib.h>
#include "minhaString.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[101], str1[51], str2[51];
	printf("Digite uma sequencia de caracteres: ");
	scanf(" %50[^\n]", str1);
	printf("Digite outra sequencia de caracteres: ");
	scanf(" %50[^\n]", str2);
	copia(str, str1);
	concatena(str, str2);
	printf("Comprimento da concatenacao: %d\n", comprimento(str));
	if(compara(str1, str2) == 0)
		printf("As strings digitadas sao iguais!\n");
	else
		printf("As strings digitadas NAO sao iguais!\n");
	return 0;
}
