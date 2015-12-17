#include <conio2.h>
#include <stdio.h>
#include<conio.h>

int a,b,c;

main()

{ 
      printf("dame el numero "); scanf("%d",&a);
      b=a%2;
      if(b==0)
     {printf("el numero %d es par",a);}
      else
      {printf("el numero %d es impar",a);}
      getch();
}
