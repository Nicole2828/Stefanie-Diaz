#include "iostream"
using namespace std;
int main(void)
{
    int pais;
    float cdinero, iva;
    cout <<"CALCULE EL IVA QUE DEBE CANCELAR" <<endl <<endl;
    cout <<"Seleccione su pais, segun el numero asignado a cada pais"<<endl <<endl;
    cout<<"1) El Salvador"<<endl;
    cout<<"2) Guatemala"<<endl;
    cout<<"3) Honduras"<<endl;
    cout<<"4) Espana"<<endl;
    cout<<endl;
    cin>>pais;
    if (pais<1 || pais>4)
    {
        cout<<"Pais no valido"<<endl<<endl;
    }
    
    cout<<endl;
    cout<<"Ingrese la cantidad de dinero" <<endl;
    cin>>cdinero;
    

    if (pais == 1)
    {
        iva = cdinero * 0.13;
        cout<<"Su iva es: $"<<iva <<endl<<endl;
    } 
    else if (pais == 2)
    {
        iva = cdinero * 0.09;
        cout<<"Su iva es: $"<<iva <<endl<<endl;
    }
    else if (pais == 3)
    {
        iva = cdinero * 0.15;
        cout<<"Su iva es: $"<<iva <<endl<<endl;
    }
    else if (pais == 4)
    {
        iva = cdinero * 0.20;
        cout<<"Su iva es: $"<<iva <<endl<<endl;
    }
    return 0;
}


