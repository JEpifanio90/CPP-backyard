#include<stdio.h>
#include<conio.h>
#include<conio2.h>
int x,y,z,a,b,c;
main()
{
      printf("Dime el año.."); scanf("%d",&x);
      y= x%4;
      z= x%5;
      a= x%10;
      b= x%100;
      c= x%1000;
      if(x>0 && y==0 && z==0 && a==0 && b==0 && c==0)
      printf("EL año es biciesto lustro,decada,siglo y milenio");
      else
      { 
          if(x>0 && y==0  && z==0 && a==0 && b==0)
          printf("EL año es  biciesto,lustro,decada y siglo");
          else
          {
              if(x>0 && y==0 && z==0 && a==0)
              printf("EL año es  biciesto, lustro y decada");
              else
              {
                  if(x>0 && z==0)
                  printf("EL año es  lustro");
                  else
                  { 
                      if(x>0 && y==0 )
                      printf("EL año es biciesto");
                      else
                      printf("Error");
                  }
              }
          }
      }
      getch();
}
                  
