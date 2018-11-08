#include <stdio.h>
int main()
{
	int vet[10];
	int i;
    for(i=0;i<10;i++){
	
	printf("Entre com o elemento %d do vetor\n", i+1);
    scanf("%d", &vet[i]);
}

if(vet[0]<vet[1] && vet[1]<vet[2] && vet[2]<vet[3] && vet[3]<vet[4] && vet[4]<vet[5] && vet[5]<vet[6] && vet[6]<vet[7] && vet[7]<vet[8] && vet[8]<vet[9])
{
	printf("Crescente");
	
}
else if(vet[0]>vet[1] && vet[1]>vet[2] && vet[2]>vet[3]>vet[4] && vet[4]>vet[5] && vet[5]>vet[6] && vet[6]>vet[7] && vet[7]>vet[8] && vet[8]>vet[9])
{
	printf("Decrescente");
}

else{
	printf("N esta em ordem");
}

return 0;
}
