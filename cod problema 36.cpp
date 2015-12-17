#include<stdio.h>
#include<conio.h>
#include<conio2.h>
#include<math.h>
#include<stdlib.h>
int i,n,op;
float x,y,z;
void menu(); void marco(); void opcion1(); void opcion2(); void opcion3();  
 void opcion4(); void opcion5); void opcion6(); void opcion7(); void opcion8();
  void opcion9(); void opcion10();
main()
{
      menu();
      switch(op)
      {
                case 1: opcion1(); 
                break;
                
                case 2; opcion2();
      }
      getche();
}
void menu()
{
     clrscr();
     gotoxy(5,5); printf("Menu de opciones matematicas");
     gotoxy(5,7); printf("1) valor absoluto");
     gotoxy(5,8); printf("2) Elevar a una potencia");
     gotoxy(5,11); scanf("%d",&op);
}
void opcion1()
{
     clrscr();
     gotoxy(5,10); printf("Dame un valor"); 
     scanf("%d",&n);
     i=abs(n);
     gotoxy(5,15); printf("El valor absoluto es %d",i);
     getch();
}
