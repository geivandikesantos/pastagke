#include <stdio.h>
#include "minhaString.h"

void copia(char* dest, char* orig){
	int i;
	for(i = 0; orig[i] != '\0'; i++)
		dest[i] = orig[i];
	dest[i] = '\0';
}

int compara(char* s1, char* s2){
	int i;
	for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++){
		if(s1[i] < s2[i])
			return -1;
		else if (s1[i] > s2[i])
			return 1;
	}
	if(s1[i] == s2[i])
		return 0;
	else if (s2[i] != '\0')
		return -1;
	else
		return 1;
}

void concatena(char* dest, char* orig){
	int i = 0;
	int j;
	while(dest[i] != '\0')
		i++;
	for(j = 0; orig[j] != '\0'; j++){
		dest[i] = orig[j];
		i++;
	}
	dest[i] = '\0';
}

int comprimento(char* s){
	int i;
	int n = 0;
	for(i = 0; s[i] != '\0'; i++)
		n++;
	return n;
}
