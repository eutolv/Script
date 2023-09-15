#include <stdio.h>
main ()

{
	float n1, n2, m, m_aula;
	int pres, aula;
	
	printf("Vamos calcular sua aprovacao/reprovacao.");
	printf("\n E importante salientar que sua aprovacao depende nao so da sua nota, mas tambem da sua presença em aula.");
	printf("\n Insira sua primeira nota:"); scanf ("%f", &n1);
	printf("\n Insira sua segunda nota: "); scanf ("%f", &n2);
	m = (n1+n2)/2;
	printf("\n Insira a quantidade de aulas existentes neste semestre: "); scanf ("%d", &aula);
	printf("\n Insira a quantidade de aulas atendidas neste semestre (Sem mentir, hein, eu vou saber)"); scanf("%d", &pres);
	m_aula = aula/pres;
	if ((m >= 6) && (m_aula >= 0.75)){
		printf("\n Parabens, nao fez mais que a sua obrigaçao kkk; to brincando, vai comemorar, jovem.");
	} else {
		printf("\n hahahahahaha, te vejo ano que vem, guerreiro. Nao devia ter ficado jogando LOL ate tarde kkkk...");
	}
	
	
}