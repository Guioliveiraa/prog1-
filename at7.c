#include <stdio.h>
#include <string.h>
int main()
{
	int gab[10]={1,3,2,1,2,3,1,1,1,2};
	int quest[10];
	int i;
	int result=0;
	int res;
	int aux[10];
	int n=0;
	float media;
	int aux2[10];
	int m;
	int aux3[10];
	int maior;
	int l;
	
	do
	{
	result=0;
	for(i=0;i<10;i++)
	{
		printf("Qual foi a resposta da questao %d? Responda com 1, 2 ou 3:\n", i+1);
		scanf("%d", &quest[i]);
		fflush(stdin);
	}
	for(i=0;i<10;i++)
	{
		if(quest[i]==gab[i])
		{
			result+=1;
		}
	}
	aux[n]=result;
	n+=1;
	
	aux2[m]=result;
	m+=result;
	
	media=m/n;
	
	
	printf("Seu numero de acertos foi:%d\n", result);
	printf("Mas algum aluno vai utilizar o sistema? Responda com 1 para continuar ou 2 para sair\n");
	scanf("%d", &res);
	
}while(res==1);
printf("%d Alunos utilizaram o sistema!\n", n);
printf("Media da turma foi %f\n", media);

return 0;
	
}
