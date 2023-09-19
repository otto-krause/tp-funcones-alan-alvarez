#include <stdio.h>
#include <stdlib.h>

void total (int r1,int r2,int r3,int r4,int r5);{
	printf("el valor de la resistencia %d:\n",rt);
	
}

int main(){
	int r1=0,r2=0,r3=0,r4=0,r5=0,rt=0,suma=0;
	suma = r1+r2+r3+r4+r5;
	printf("el valor de r1 %d:\n",r1);
	scanf("%d",&r1);
	printf("el valor de r2 %d:\n",r2);
	scanf("%d",&r2);
	printf("el valor de r3 %d:\n",r3);
	scanf("%d",&r3);
	printf("el valor de r4 %d:\n",r4);
	scanf("%d",&r4);
	printf("el valor de r5 %d:\n",r5);
	scanf("%d",&r5);
	total(r1,r2,r3,r4,r5);
	system("pause");
	return 0;
}
	
