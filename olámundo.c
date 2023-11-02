#include <stdio.h>
#include <locale.h>

main ()
{
	char nome
	setlocale (LC_ALL, "Portuguese");
	printf("Olá! Este é um programa que mostra uma mensagem simples. Qual é o seu nome?: ");
	scanf("%c", &nome);
	printf("Olá, %c, é um prazer te conhecer!", nome);
}