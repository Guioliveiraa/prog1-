#include <stdio.h>
int main()
{
	int predio=0;
	int i;
	int elev=0;
	int aux;
	int aux2;
	int excesso;
	
	printf("Entre com o numero de andares do predio:\n");
	scanf("%d", &predio);
	
	for(i=1;i<=predio;i++)
	{
		printf("Quantas pessoas entraram no andar %d:\n", i);
		scanf("%d", &aux);
		elev+=aux;
		if(elev>15)
		{
			printf("EXCESSO DE PASSAGEIROS.DEVEM SAIR\n");
			printf("Existem %d pessoas, deseja remover quantas?\n", elev);
			scanf("%d",& excesso);
			elev-=excesso;
			
		}
		printf("Quantas pessoas sairam no andar %d:\n", i);
		scanf("%d", &aux2);
		elev-=aux2;
		
	}
	
	printf("Vao descer %d pessoas", elev);
	
}
