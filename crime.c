#include <stdio.h>
int main()
{

char r[5];
int i;
int res=0;

	
	printf("Telefonou para a vitima?\n");
	scanf("%c",&r[0]);
	fflush(stdin);
	printf("Esteve no local do crime?\n");
	scanf("%c",&r[1]);
	fflush(stdin);
	printf("Mora perto da vitima?\n");
	scanf("%c",&r[2]);
	fflush(stdin);
	printf("Devia para a vitima?\n");
	scanf("%c",&r[3]);
	fflush(stdin);
	printf("Já trabalhou com a vitima?\n");
	scanf("%c",&r[4]);
	fflush(stdin);

for(i=0;i<5;i++){
	if(r[i]=='s'){
		res+=1;
	}}
	if(res<=2)
{
	printf("Inocente\n");
	
}
    if(res==3 || res==4){
    	printf("Cumplice");
	}
	if(res==5){
		printf("Assassino");
	}


return 0;
}
