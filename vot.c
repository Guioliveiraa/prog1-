#include <stdio.h>
int main()
{
	int jog[23]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int telespec;
	int i;
	int o;
	int aux;
	int maior=0;
	int j;
	float cent;
    
	
	
	printf("Quantos telespectadores serão entrevistados?\n");
	scanf("%d", &telespec);
	
	for(i=0;i<telespec;i++)
	{
		printf("Qual jogador foi o melhor? Insira um valor valido\n");
		scanf("%d", &aux);
		
		if(aux>23)
		{
			printf("Jogador invalido\n");
				
		printf("Qual jogador foi o melhor? Insira um valor valido\n");
		scanf("%d", &aux);
		break;
			
		}
	
		if(aux==0)
		{
			printf("Votaçao encerrada\n");
			return 0;
		}
		
		
		jog[aux-1]+=1;
		
}
	for(o=0; o<23;o++)
	{
		if(jog[o]>maior)
		{
			maior=jog[o];
			j=o+1;
		}
		cent=(jog[o]*100)/telespec;
		printf("o jogador %d teve %d votos, com %.2f%%\n", o+1,jog[o], cent);
	
	}
	printf("O total de votos foi %d\n", telespec);
	printf("O jogador mais votado foi %d com %d votos", j, maior);

	}

