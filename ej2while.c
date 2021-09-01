#include<stdio.h>
int main(){
	int i=0,suma=0,n1,mayor=0;
	printf("ingrese 15 numeros: ");

	while(i<16){
		scanf("%d",&n1);
		suma+=n1;
		
		if(n1>mayor){
			mayor=n1;
		}
		i++;
	}	
	printf("el mayor numero es: %d\n",mayor);
	printf("el promedio es: %d",suma/15);
	
	return 0;
}
