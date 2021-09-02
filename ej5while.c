#include<stdio.h>
int main(){
 int total=1,n1,n2,i=0;

 printf("ingrese la base: ");
 scanf("%d",&n1);
 printf("ingrese el exponente: ");
 scanf("%d",&n2);

 while(i<n2){
   total=total*n1;

   i++;
 }
 printf("el valor es: %d",total);

  return 0;
}


