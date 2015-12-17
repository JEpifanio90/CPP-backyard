#include<stdio.h>

float r,h,v;

main()

{ 
      printf("dame el radio"); scanf("%f",&r);
      printf("dame la altura"); scanf("%f",&h);
     v=((r*r)*h*3.14);
     printf("el volumen es %f ",v);
     sleep(5);
}
