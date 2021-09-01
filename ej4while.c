#include<stdio.h>
int main(){
	int total=1,n1,i=1;
	printf("ingrese un numero: ");
	scanf("%d",&n1);
	
	while(i<n1){
		total+=total*i;
		i++;
	}
	printf("el factorial es: %d",total);
	return 0;
}
