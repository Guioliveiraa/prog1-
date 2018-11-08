#include <stdio.h>
int main()
{

int idade[55];
float peso[55];
float altura[55];
int idade2=0;
int med_i;
int med_a;
float pac;
int i;
for(i=0;i<55;i++){

printf("Digite a idade do jogador %d:",i+1);
scanf("%d",&idade[i]);

printf("Digite o peso do jogador %d:",i+1);
scanf("%f",&peso[i]);

printf("Digite a altura do jogador %d:",i+1);
scanf("%f",&altura[i]);
}

for(i=0;i<55;i++){
	if(idade[i]<18)
	idade2=idade2+1;
}
printf("Numero de jogadores menores que 18 anos: %d\n",idade2);

for(i=0;i<55;i++){

med_i=med_i+idade[i];

}

printf("Media de idade: %d\n", med_i/2);

for(i=0;i<55;i++){

med_a=med_a+altura[i];
}

printf("Media de altura: %d\n", med_a/2);

for(i=0;i<55;i++){

	if(peso[i]>80)
	{
		pac=pac+1;
	}
	
	}

printf("Jogadores com mais de 80kg: %2.f%%\n", (pac/i)*100);

 

return 0;
}

