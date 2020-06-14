// Crear un programa para determinar si el año leido del teclado es o no bisiesto// 
#include <iostream>
using namespace std;
int bisiesto (int a);

int main (){
    
    int a;
    cout << "Ingrese un año: ";
    cin >> a;
    if (bisiesto (a)) cout<< "El año es Bisiesto";
    else cout<< "El año no es Bisiesto";

    return 0;

}

int bisiesto (int a){
    if (a%4 !=0)return false;
    else if (a% 100 !=0) return true;
    else if (a%400 !=0) return false;
    return true;

}
