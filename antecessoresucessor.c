#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	int num, ant, suc;
	printf("Digite um valor qualquer: "); scanf("%d", &num);
	ant = num-1;
	suc = num+1;
	printf ("\nO valor digitado foi %d, seu antecessor é %d e seu sucessor é %d", num, ant, suc );
}