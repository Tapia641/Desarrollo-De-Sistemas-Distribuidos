#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
     int tiempo_total;
     //definir variables restantes
     int hrs,min,seg,flag=0;
     do{ 
        
            //system("cls"); //Limpia la pantalla con ms dos.            
                 cout << "\n Introduzca la cantidad de segundos: " ;
                 cin >> tiempo_total ;
                 cout << "\n";


                 hrs=min=seg=0;

                 if(tiempo_total==0){
                     hrs=min=seg=0;
                 }
                 if(tiempo_total>=3600){
                     while(tiempo_total>=3600){
                         hrs++;//inicializado en 0
                         tiempo_total-=3600;
                     }
                     if(tiempo_total>=60){
                         while(tiempo_total>=60){
                             min++;
                             tiempo_total-=60;
                         }
                         seg=tiempo_total;
                     }else{
                         min=0;
                         seg=tiempo_total;
                     }
                 }else{
                     if(tiempo_total>=60){
                         while(tiempo_total>=60){
                             min++;
                             tiempo_total-=60;
                         }
                         seg=tiempo_total;
                     }else{
                         hrs=0;
                         min=0;
                         seg=tiempo_total;
                     }
                 }

                 cout << hrs << " horas, " << min << " minutos y " << seg << " segundos" << "\n";
        cout << "\n ¿Desea intentar otro?     0-Si    1-No \n";
        cin >> flag;
    }while(flag!=1);
         return 0;
}
