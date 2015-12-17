#include<stdio.h>
#include<conio.h>
#include<conio2.h>

float a,b,c;

main()

{
      printf("dame el lado a"); scanf("%f",&a);
      printf("dame el lado b"); scanf("%f",&b);
      printf("dame el lado c"); scanf("%f",&c);
      
      if(a==b && a==c)
      { printf("el triangulo es equilatero");}
      else
      {   if(a==b && a!=c)
                 {      printf("el triangulo es iscoceles"); }
          else
              {  if((a!=b) && (a!=c))
                 { printf("el triangulo es escaleno"); }
                 else
                 { printf("error 404"); }
              }
      }
      getch();
}
