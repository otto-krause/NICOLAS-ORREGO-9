#include<stdio.h>
int main(){
	
	int a,i=0,j=0,r=0,r2=0;
	while(i<30){
		printf("ingrese la nota del alumno %d: \n",i+1);
		j=0;
		while(j<10){
			scanf("%d",&a);
			r+=a;
			j++;
		}
		printf("el promedio de este alumno es: %d\n",r/10);
		r2+=a;
		i++;
	}
	printf("el promedio el curso es: %d", r2/300);
	
	return 0;
}
