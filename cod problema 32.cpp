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
   printf("El numero %d no es primo",o);    
   else
{
      if (y==0 && z==0 && a==0 && b==0 && c==0)
           printf("El numero %d no es primo",o); 
      else
      {
         if (y==0 && z==0 && a==0 && b==0)
              printf("El numero %d no es primo",o); 
         else
         {
            if (y==0 && z==0 && a==0)
                 printf("El numero %d no es primo",o);  
            else
            {
               if (y==0 && z==0)
               printf("El numero %d no es primo",o);
               else
               {
                  if (y==0)
                       printf("El numero %d es primo",o);  
                      
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

   
