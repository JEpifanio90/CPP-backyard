#include <conio.h>
#include <stdio.h>
int x,y,z,a;
main()

{
      printf("dame el numero donde inica la serie"); scanf("%d",&a);
      printf("dame el numero de datos que quieres que se impriman");
      scanf("%d",&x);
      y=1;
      while(y<=x)
      {
                      z=a*y;
                      printf("%d ",z);
                      y=y+1;
      }
      getch();
}
