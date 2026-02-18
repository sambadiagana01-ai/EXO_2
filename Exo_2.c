
#include <stdio.h>
 int main(){
     int x,n,som=0,cpt=0;
     float moy;
     do{
      printf("Veuillez entrer le nombre d'entiers positifs a saisir:");
      scanf("%d",&n);
      }while(n<0);
      for(int i=0;i<n;i++){
            do{
        puts("Veuillez saisir des entiers negatifs:");
        scanf("%d",&x);
            }while(x>0);}

    return 0;
 }
