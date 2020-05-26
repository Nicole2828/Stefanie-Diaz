#include <iostream>
using namespace std;

int main()
{
    int l;
    string palabra,txtanswer1, txtanswer2, txtanswer3;

    cout<<endl;
    cout <<"¿LA PALABRA EMPIEZA Y TERMINA CON LA MISMA LETRA?" << endl << endl;

    cout <<"Digite una palabra: "<<endl;
    cin>> palabra;
    cout<<endl;

    txtanswer1 = palabra [0];
    l = palabra.length()-1;
    txtanswer2 = palabra [l];
    txtanswer3 = (txtanswer1==txtanswer2)?" empieza y termina con la misma letra " : " no empieza y termina con la misma letra ";

    cout<<"La palabra ingresada"<<txtanswer3<<endl;
    return 0;

}
