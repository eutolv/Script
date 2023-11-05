#include <stdio.h>
#include <locale.h>
#include <ctype.h>

main()
{
	char resp;
	do {
	float l1, l2, l3;
	resp = 'S';
	setlocale(LC_ALL, "Portuguese");
	printf("\nDigite 3 valores para saber se é possível formar um triângulo;");
	printf("\nDigite o valor do primeiro lado: "); scanf("%f", &l1);
	printf("\nDigite o valor do segundo lado: "); scanf("%f", &l2);
	printf("\nDigite o valor do terceiro lado: "); scanf("%f", &l3);
	if (l1+l2>l3 && l1+l3>l2 && l3+l2>l1)
	{
		printf("\nÉ possível formar um triângulo com esses valores!");
		if (l1==l2 && l2==l3 && l1==l3){
			printf("\nE este triângulo é equilátero, ou seja, ele tem todas as suas medidas iguais.");
		}
		else if(l1==l2 && l2!=l3 && l1!=l3){
		printf("\nE este triângulo é isóceles, ou seja, ele tem 2 medidas iguais.");
	}
		else if (l1!=l2 && l2!=l3 && l1!=l3){
			printf("\nE este triângulo é escaleno, ou seja, ele tem todas as medidas diferentes.");
	}
	}
	else {
		printf("\nNão é possível formar um triângulo com essas medidas.");
	}
	printf("\nDeseja fazer novamente? [S/N]"); scanf(" %c", &resp);
	}while (resp == 's' || resp == 'S');
	
}