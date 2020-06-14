// Construir un programa para que el usuario pueda jugar adivinando un número que está previamente guardado//
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    int numero, dato, contador =0, intento =5;
    srand(time(NULL)); //Generar un numero aleatorio//
    dato = 1 + rand()&(101);
    cout<<"Adivina un numero entre 0 y 100 "<<endl;
    cout<<"Puedes adivinarlo?"<<endl;
    
    do{
       //Si el numero es menor o mayor usuaremos if//
        cout<<"Digite un numero: "; cin>>numero;
        if(numero>dato){
            cout<<"El numero es menor"<<endl;
        }    
        if (numero<dato){
            cout<<"El numero es mayor"<<endl;
        }   
    contador++;  
    }while(numero != dato);
    cout<<"Felicidades, adivinaste el numero correcto!";
    
    return numero; 

}

