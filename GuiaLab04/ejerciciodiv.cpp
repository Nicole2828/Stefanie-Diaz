#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    cout<< "Ingrese el numero mayor: " << endl;
    cin >> num1;
    cout << "Ingrese el numero menor: " << endl;
    cin >> num2;

    if (num1 % num2 == 0){
        cout << num2 << " Es divisor de "<< num1 << endl;
    }

    else {
        cout << num2 << " No es divisor de " << num1 << endl;
    }
    return 0;

}