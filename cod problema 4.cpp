#include<stdio.h>

float v0,a,t,vf;

main()

{ 
      printf("dame la velocidad incial"); scanf("%f",&v0);
      printf("dame la aceleracion"); scanf("%f",&a);
      printf("cuanto tiempo hizo"); scanf("%f",&t);
      vf=v0+(a*t);
      printf("la velocidad final es %f m/s",vf);
      sleep(5);
}
