#include <iostream>
using namespace std;
int main() {
    int nombre,cantidad,precio; 
    cin>> nombre>>cantidad>>precio;

    cout<<"ingrese nombre de producto: ";
    cin>>nombre;
    cout<<"Ingrese cantidad de producto: ";
    cin>>cantidad;
    cout<<"Ingrese precio de producto";
    cin>>precio;

    int mult=cantidad*precio;

    cout<<"El resultado es: ";

    return 0;
}