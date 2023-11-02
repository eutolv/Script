#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float sal;
    char nome[100];
    printf("\nQual é o seu nome: ");
    scanf ("%s", &nome);
    printf("\nDigite seu salário atual, em reais: ");
    scanf("%f", &sal);
	printf("\nO salário de %s é de %2.f reais.", nome, sal);

}


