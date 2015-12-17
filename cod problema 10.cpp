#include<stdio.h>

float vi,a,t,x;

main()

{ 
      printf("dame el valor de la velocidad inicial"); scanf("%f",&vi);
      printf("dame el valor del tiempo"); scanf("%f",&t);
       printf("dame el valor de la aceleracion"); scanf("%f",&a);
     x=(vi*t)+(.5*a*(t*t));
     printf("la posicion es %f ",x);
     sleep(5);
}
