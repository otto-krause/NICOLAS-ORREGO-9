#include<stdio.h>
int main(){
  int i=0,d,me=0,m=0;
  printf("ingrese el sueltdo de 20 personas: ");
  while(i<20){
    scanf("%d", &d);
    if(d>2000){
      m++;
    }
    else{
      me++;
    }
    i++;
  }
  printf("los que ganan mas de 2000 son: %d\n los que ganan menos de 2000 son: %d\n",m,me);
  return 0;
}
