#include <stdio.h>
#include <conio2.h>

int a,c,i;

main()

{ 
      printf("Cual numero quiere multiplicar"); scanf("%d",&a);
      i=1;
      while(i<10)
      { 
         c=a*i;
         printf("%d * %d = %d \n ",a,i,c);
         i=i+1;
      }
      getch();
}
  




