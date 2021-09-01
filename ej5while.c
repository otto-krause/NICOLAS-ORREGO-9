  
#include<stdio.h>

int main (){
	
	int base, potencia, i, resultado=1;
	
	printf("ingrese dos numeros: ");
	scanf("%d %d", &base, &potencia);
	
	for(i=0;i<potencia;i++){
		
		resultado= resultado * base;
	}
		
		printf("resultado: %d", resultado);	
	
	
	
	return 0;
}
