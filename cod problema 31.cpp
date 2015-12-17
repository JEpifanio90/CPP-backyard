#include<conio.h>
#include<stdio.h>
#include<conio2.h>

int x,y,z,a,b,c,d,o,r,q;

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
        {
            r=1+2+3+4+5+6+o;
                      q=r-o;
                      printf("divisores 1 2 3 4 5 6 %d \n",o);
                      if(q==o)
                      printf("El numero %d es perfecto",o); 
                      else
                      printf("El numero %d no es perfecto",o); 
        }
   else
{
      if (y==0 && z==0 && a==0 && b==0 && c==0)
              {
               r=1+2+3+4+5+o;
                      q=r-o;
                      printf("divisores 1 2 3 4 5 %d \n",o);
                      if(q==o)
                      printf("El numero %d es perfecto",o); 
                      else
                      printf("El numero %d no es perfecto",o); 
               }
               
      else
      {
         if (y==0 && z==0 && a==0 && b==0)
                {
                      r=1+2+3+4+o;
                      q=r-o;
                      printf("divisores 1 2 3 4 %d \n",o);
                      if(q==o)
                      printf("El numero %d es perfecto",o); 
                      else
                      printf("El numero %d no es perfecto",o); 
                }
                       
         else
         {
            if (y==0 && z==0 && a==0)
                      {   
                      r=1+2+3+o;
                      q=r-o;
                      printf("divisores 1 2 3 %d \n",o);
                      if(q==o)
                      printf("El numero %d es perfecto",o); 
                      else
                      printf("El numero %d no es perfecto",o); 
                      }
                      
            else
            {
               if (y==0 && z==0)
                    {
                    r=1+2+o;
                      q=r-o;
                      printf("divisores 1 2 %d \n",o);
                      if(q==o)
                      printf("El numero %d es perfecto",o); 
                      else
                      printf("El numero %d no es perfecto",o); 
                      }
                      
               else
               {
                  if (y==0)
                      {
                      r=1+o;
                      q=r-o;
                      printf("divisores 1 %d \n",o);
                      if(q==o)
                      printf("El numero %d es perfecto",o); 
                      else
                      printf("El numero %d no es perfecto",o); 
                      }
                      
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

   
