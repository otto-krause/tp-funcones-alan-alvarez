#include <stdio.h>
#include <stdlib.h>

void v(int h,int m){
	int totalp=h+m;
	float ph=(h*100)/totalp;
	float pm=(m*100)/totalp;
	printf("el porcentaje de hombres:%.2f\n",ph);
	printf("el porcentaje de muejers:%.2f\n",ph);
}
	int main (){
		int h,m;
		printf("ingrese el numero de hombres");
		scanf("%d",&h);
		printf("ingrese el numero de mujeres");
		scanf("%d",&m);
		system("pause");
		v(h,m);
		
		return 0;
	}
		
