#include<stdio.h>
#include<conio.h>
#include<conio2.h>
int x,a,b,c,i;
main()
{
      printf("Cuantos dias se trabajo?"); scanf("%d",&x);
      a=1;
      b=1;
      if(x>0 && x<=31)
           { 
             for(i=1;i<x;i++)
             {
              a=a*2;
              c =a+b;
             }
             printf("El salario es $ %d",c);
             }
             else
             printf("Porfavor checa bien el numero de dias");
     getch();
}
      
      
