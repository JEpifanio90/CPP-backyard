#include<stdio.h>
#include<conio2.h>
#include<string.h>

int dia,mes;
char nom[20];

main()

{
        printf("dame el dia de nacimiento..."); scanf("%d",&dia);
        printf("dame el mes de nacimiento..."); scanf("%d",&mes);
       switch(mes)
       {
                  case 1: if(dia<20 && dia>0)
                       strcpy(nom,"capricornio...");
                       else
                        strcpy(nom,"acuario...");
                  break;
                  
                  case 2: if(dia<19 && dia>0)
                       strcpy(nom,"acuario...");
                       else
                        strcpy(nom,"piscis...");
                  break;
                        
                  case 3: if(dia<21 && dia>0)
                       strcpy(nom,"piscis...");
                       else
                        strcpy(nom,"aries...");
                  break;
                        
                  case 4: if(dia<21 && dia>0)
                       strcpy(nom,"aries...");
                       else
                        strcpy(nom,"tauro...");
                  break;
                        
                  case 5: if(dia<22 && dia>0)
                       strcpy(nom,"tauro...");
                       else
                        strcpy(nom,"geminis...");
                  break;
                        
                  case 6: if(dia<20 && dia>0)
                       strcpy(nom,"geminis...");
                       else
                        strcpy(nom,"cancer...");
                  break;
                        
                  case 7: if(dia<21 && dia>0)
                       strcpy(nom,"cancer...");
                       else
                        strcpy(nom,"leo...");
                        
                  break;
                        
                  case 8:if(dia<23 && dia>0)
                       strcpy(nom,"leo...");
                       else
                        strcpy(nom,"virgo...");
                  break;
                        
                  case 9:if(dia<23 && dia>0)
                       strcpy(nom,"virgo...");
                       else
                        strcpy(nom,"libra...");
                        
                  break;
                        
                  case 10:if(dia<23 && dia>0)
                       strcpy(nom,"libra...");
                       else
                        strcpy(nom,"escorpion...");
                  break;
                        
                  case 11: if(dia<24 && dia>0)
                       strcpy(nom,"escorpion...");
                       else
                        strcpy(nom,"sagitario...");
                  break;
                        
                  case 12: if(dia<24 && dia>0)
                       strcpy(nom,"sagitario...");
                       else
                        strcpy(nom,"capricornio...");
                  break;
              
       }
       printf("Es..%s",nom); 
       getch();
    
}
    
    
    
    
   
