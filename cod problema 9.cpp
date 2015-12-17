#include<stdio.h>

float q,t,i;

main()

{ 
      printf("dame el valor de la carga"); scanf("%f",&q);
      printf("dame el valor del tiempo"); scanf("%f",&t);
     i=q/t;
     printf("la intensidad es %f ",i);
     sleep(5);
}
