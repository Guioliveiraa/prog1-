#include <stdio.h>
int main()
{
	int vet[10];
	int i;
	int a=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite o valor %d do vetor:\n", i+1);
		scanf("%d", &vet[i]);
		
	}
	
	for(i=0;i<10;i++)
	{
		if(vet[i]==vet[i+1])
		{
			a+=1;
					
		}
		
	}
	printf("Maior sequencia %d", a+1);
	
}
