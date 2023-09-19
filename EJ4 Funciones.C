#include <stdio.h>
#include <stdlib.h>
void superficie (float a, float f); 


int main() {
	
	float f,a;
	
	printf("ingrese la fuerza");
	scanf("%d",&f);
	printf("ingrese el area");	
	scanf("%d",&a);
	superficie(a,f); 
	system("pause");		
	
	return 0;
}

void superficie (float a,float f){
	
	float p=0;
	p =f/a;
	printf("la presion %.2f",p);
}
	
