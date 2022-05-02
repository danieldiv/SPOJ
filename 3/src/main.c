#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 20

void tokenizar(char *str, char *A, char *B);

int main() {

	char *str = (char*)malloc(TAM);
	char *A = (char*)malloc(10);
	char *B = (char*)malloc(10);
	char *aux = (char*)malloc(5);

	char *check;

	int cont = 0;

	while(cont++ < 24) {
		fgets(str, TAM, stdin);
		tokenizar(str, A, B);

		for(int i=0; i < strlen(B) - 1; i++)
			aux[i] = B[i];

		check = strstr(A, aux);

		printf((check) ? "1\n" : "0\n");
	}

	return 0;
}

void tokenizar(char *str, char *A, char *B) {
	const char sep[] = " ";
	char *tokens;
	int aux = 0;

	tokens = strtok(str, sep);

	while(tokens != NULL) {

		if(aux == 0)
			strcpy(A, tokens);
		else if(aux == 1) {
			strcpy(B, tokens);
			return;
		}

		aux++;
		tokens = strtok(NULL, sep);
	}
}