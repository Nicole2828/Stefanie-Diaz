#include <iostream>
using namespace std;
int main() {
    float r,D,perimetro,area;
    cout<<"Introduce el radio de la circunferencia"<<endl;
    cin>>r;
    perimetro=2*3.14*r;
    cout<<"El perimetro de la circunferencia es: "<<endl<<perimetro<<endl;
    cout<<"Introduce el diametro de la circunferencia"<<endl;
    cin>>D;
    area=(3.14*D*D)/4;
    cout<<"El area de la circunferencia es: "<<endl<<area<<endl;

    return 0;

}