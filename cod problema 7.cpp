#include<stdio.h>

int a, b,c,r,u;

main()

{ 
      printf("dame el valor de a"); scanf("%d",&a);
      printf("dame el valor de b"); scanf("%d",&b);
      printf("dame el valor de c"); scanf("%d",&c);
      u=-b -(((b*b)-(4*a*c)))^.5;
      r=u/(2*a);
      printf("El resultado es %d unidades",r);
      sleep(5);
}
