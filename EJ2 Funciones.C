#include <stdio.h>
#include <stdlib.h>

void area (int altura,int base);
int main(){
	
	int b=0,a=0,perimetro=0;
	printf("ingrese el area");
	scanf("%d",&a);
	printf("ingrese la base");
	scanf("%d",&b);
	perimetro(a,b);
	area(a,b);
	system("pause");
	return 0;
}
	void perimetro (int a,int b)
	{
		int p=0;
		p=2*a+2*b;
		printf("el valor del perimetro es &d:\n\n",p);
	}
	
	void area (int a,int b)
	{
		int area=0;
		area=a*b;
		printf("el valor del area es %d:\n\n",area); 
	}
}
