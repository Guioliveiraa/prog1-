#include <stdio.h>

int main()
{
	int vet[15];
	int i;
	
	for(i=0;i<15;i++)
	{
	
	printf("Entre com os valores %d do vetor\n", i+1);
	scanf("%d", &vet[i]);
	
}
    printf("Vetor compactado [");

    for(i=0;i<15;i++)
    {
    	
    	if(vet[i]!=0)
    	{
    		printf("%d ", vet[i]);
		}
	}
	printf("]");
	return 0;
}
