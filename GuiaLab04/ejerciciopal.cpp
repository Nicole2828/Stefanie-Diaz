#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    char palabra[30];
    int longitud=0;
    cout<<"Verficar si la palabra ingresa es mayor que 10 caracteres"<<endl<<endl;
    
    cout<<"Digite una palabra: "<<endl;
    cin.getline(palabra,30,'\n');
    longitud = strlen(palabra);

    if(longitud>=10)
    {
        cout<<" La palabra es mayor a 10 caracteres"<<endl;
    }
    else
    {
        cout<<"La palabra no es mayor de 10 caracteres";
    }


    if(longitud==0){
        printf(" y es par");
    }
    else 
    {
        printf(" y es impar");
    }

    return 0;
}
