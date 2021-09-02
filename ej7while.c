#include<stdio.h>
int main(){
 int s=0,v, i=0,mayor=0,j=0;

 while(i<20){
   printf("ingrese la cantidad de ventas de este vendedor: ");
   j=0;
   int total=0;
   while(j<15){
     scanf("%d",&v);
     total+=v;
     j++;
   }
   printf("la cantidad ventididas por este vendedor es: %d\n",total);
   s+=total;
   if(total>mayor){
     mayor=total;
   }
   i++;
 }
  printf("el total de unidades vendidas es: %d\n",s);
  printf("la mayor venta fue de: %d\n",mayor);
  return 0;
}
