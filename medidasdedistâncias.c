//Desenvolva um programa que leia uma distância em metros e mostre os valores
//relativos em outras medidas
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float metros, dm, cm, mm, dam, hm, km;
	printf("Digite um valor em metros para saber seus valores relativos em outras medidas: "); scanf("%f", &metros);
	dm: metros*10;
	cm = metros*100;
	mm = metros*100;
	dam = metros/10;
	hm = metros/100;
	km = metros/1000;
	printf("\nO valor digitado foi %f", metros);
	printf("\nSua distância em decímetros é %.2f", dm);
	printf("\nSua distância em centímetros é %.2f", cm);
	printf("\nSua distância em milímetros é %.2f", mm);
	printf("\nSua distância em decâmetros é %.2f", dam);
	printf("\nSua distância em hectômetros é %.2f", hm);
	printf("\nSua distância em quilômetros é %.2f", km);
}