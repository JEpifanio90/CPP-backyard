#include<stdio.h>
#include<conio2.h>
#include<conio.h>

int x,y,z;

main()

{
      printf("dame el numero del que quieres sacar el factorial"); 
      scanf("%d",&x);
      y=1; z=1;
      do
        {
         y= y * z;
      z++;
            }
      while(z <= x);
      printf("el factorial de %d es    %d",x,y);
      getche();
}
