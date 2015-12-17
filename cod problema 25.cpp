#include <conio.h>
#include<conio2.h>
#include <stdio.h>

int x,y,z,a;

main()

{ 
      printf("Cuantos numeros quieres imprimir?"); scanf("%d",&x);
      a=1;
      printf(" %d  ",a);
      y=1;
      z=1;
      while(y<=x)
      {
                 if(z==1)
                 {
                         a=a*2;
                         printf("  %d  ",a);
                         z=2;
                 }
                 else
                 {
                     a=a+3;
                     printf(" %d ",a);
                     z=1;
                 }
                 y=y+1;
   }
   getche();
}
