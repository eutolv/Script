#include <stdio.h>
#include <locale.h>
#include <conio.h>

int multiplica (int n1, int n2) { //o primeiro int determina que o resultado da função toda dever ser inteiro (mas poderia ser float); o segundo é para determinar
	int resultado; // o tipo de variável.
	resultado = n1 * n2;
	return (resultado); //para retornar o valor na main
}

int main (void) {
	setlocale (LC_ALL, "Portuguese");
	int v1, v2, resultado;
	printf("Digite o primeiro valor:");
	scanf ("%d", &v1);
	printf("\nDigite o segundo valor:");
	scanf("%d", &v2);
	
	resultado = multiplica (v1,v2);
	printf("\nResultado = %d", resultado);
	getch ();
	return 0;
	
}