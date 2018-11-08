#include <stdio.h>
int main()
{
	int vet[10];
	int vet2[15];
	int i;
	int maior=0;
	int maior2=0;
	
    for(i=0;i<10;i++){
	
	printf("Entre com o elemento %d do vetor\n", i+1);
    scanf("%d", &vet[i]);
    if(vet[i]>maior){
    	maior=vet[i];
	}
}
    for(i=0;i<15;i++){
	
    	printf("Entre com o elemento %d do vetor2\n", i+1);
    scanf("%d", &vet2[i]);
    
    if(vet[i]>maior2){
    	maior2=vet[i];
}
}

if(maior==maior2){
	printf("O maior elemento eh %d", maior);
	
}
else{

printf("N existe elemento em comum");

}


return 0;
}

