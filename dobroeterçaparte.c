#include <stdio.h>
#include <locale.h>
//crie um programa que leia um número real e que mostre na tela seu dobro e sua terça parte
main ()
{
	setlocale(LC_ALL, "Portuguese");
	float num, dob, ter;
	printf("Digite um número qualquer: "); scanf("%f", &num);
	dob = num*2;
	ter = num/3;
	printf("\nO número digitado foi %.2f, seu dobro é %.2f e sua terça parte é %.2f", num, dob, ter);
}