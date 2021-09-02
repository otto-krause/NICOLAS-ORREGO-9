#include<stdio.h>
int main(){
  int i=0,n1,p=0,n=0,c=0;
   printf("ingrese 10 numeros: ");
   while(i<10){
    scanf("%d",&n1);
    if(n1>0){
      p++;
    }
    else  if(n1<0){
      n++;
    }
    else{
      c++;
    }
    i++;
  }
   printf("los positivos son: %d\n los negativos son: %d\n los iguales a cero son: %d\n",p,n,c);
  return 0;
}
