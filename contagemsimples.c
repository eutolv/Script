#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese");
	int i, num;
	int v[5];
	
	for (i = 1; i<=5; i++)
	{
		printf("\nDigite um número qualquer: ");
		scanf("%d", &v[i]);
	}
	printf("\nForam digitados %d números", i);
	printf("\nOs números digitados foram:");
	
	for (i = 0; i <= 5; i++)
    {
        printf("%d ", v[i]);
    }
	printf("\n");
}