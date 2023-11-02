#include <stdio.h>
#include <locale.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media;
	printf("\nVamos calcular sua média. Digite sua primeira nota: "); scanf("%f", &n1);
	printf("\nDigite sua segunda nota: "); scanf("%f", &n2);
	media = (n1+n2)/2;
	printf("\nSua média é %.2f", media );
}