#include<conio.h>
#include<stdio.h>
#include<conio2.h>

int x,y,z,a,b,c,d,o;

main()

{
      printf("dame un numero"); scanf("%d",&x);
      y=x%1;
      z=x%2;
      a=x%3;
      b=x%4;
      c=x%5;
      d=x%6;
      o=x;
      
   if (y==0 && z==0 && a==0 && b==0 && c==0 && d==0)
   printf("El numero %d es divisible entre..1 2 3 4 5 6 %d",o,x);    
   else
{
      if (y==0 && z==0 && a==0 && b==0 && c==0)
          printf("El numero %d es divisible entre..1 2 3 4 5 %d ",o,x); 
      else
      {
         if (y==0 && z==0 && a==0 && b==0)
             printf("El numero %d es divisible entre..1 2 3 4 %d ",o,x);  
         else
         {
            if (y==0 && z==0 && a==0)
                printf("El numero %d es divisible entre..1 2 3 %d ",o,x);  
            else
            {
               if (y==0 && z==0)
               printf("El numero %d es divisible entre..1 2 %d",o,x); 
               else
               {
                  if (y==0)
                      printf("El numero %d es divisible entre..1 %d ",o,x);  
                      
                  else
                  {
                     printf("El numero no tiene divisores");                 
                  }
               }
            }
         }
      }
   }

   getch();
}

   
