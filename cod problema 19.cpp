#include <conio2.h>
#include <stdio.h>

int a,b,c,x,i;

main()

{ 
      printf("cuantas materias llevas"); scanf("%d",&a);
      i=1;
      do 
      {   printf("cual fue tu calificacion"); scanf("%d",&b);
      c=b+b;
      i=i+1;
      }
      while(i<=a);
   x=c/a;
   printf("Tu promedio es..%d",x);
  getch();
}
