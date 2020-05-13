#include <iostream>
using namespace std;
int main() {
    float a,b,c,det,x_1,x_2;
    cout<<"Ingrese los valores de a, b, c de la siguiente expresion: "<<endl;
    cout<<"ax2 + bx + c = 0"<< endl << endl;
    cout<<"Ingrese a: ";
    cin>>a;
    cout<<"Ingrese b: ";
    cin>>b;
    cout<<"Ingrese c: ";
    cin>>c;

    det=b*b - 4.00*a*c;

    if (det==0)
    {
      x_1=(-b)/(2*a);
      x_2=x_1;
      cout << endl << endl << "x_1 = x_2 = " << x_1;
    }
     
     return 0;
    
    }