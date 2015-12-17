#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
int num, i; //residuo =i
bool band;
cout <<"digite el numero: ";
cin >>num;
if(num<=1800){
i=num%2;
band=true;
cout<<"la serie de Ulam es: " <<num <<" ";

while (band==true){
if (i==1)num=num*3+1;
else num=num/2;
cout<<num <<" ";
if(num==1)band=false;
else i=num%2;
}
}
getch();
} 
