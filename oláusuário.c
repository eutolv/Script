#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[100]; // Declarar um array de caracteres para armazenar o nome

    printf("Olá! Este é um programa que mostra uma mensagem simples. Qual é o seu nome?: ");
    scanf("%s", nome); // Usar "%s" para ler uma string (nome)
    
    printf("Olá, %s, é um prazer te conhecer!\n", nome);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
