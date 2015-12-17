
#include <conio.h>
#include <stdio.h>
int x,y,z,a,b;
main()

{
      printf("dame el numero de datos que quieres que se impriman");
      scanf("%d",&x);
      y=1;
      while(y<=x)
      {
                      z=(2*y);
                      printf("%d ",z );
                      y=y+1;
      }
      getch();
}
