#include <iostream>
using namespace std;

    int main()

{
    int n;

    cout<<"  == COLORES ==  "<<endl;
    cout<<" 1. Amarillo "<<endl;
    cout<<" 2. Verde "<<endl;
    cout<<" 3. Azul "<<endl;
    cout<<" 4. Rojo "<<endl;
    cout<<" 5. Negro " <<endl;

    cout<<"Seleccione un numero entre 1 y 5:";
    cin>>n;

    if (n<1 || n>5)
{
    cout<< "Su seleccion es invalida"<<endl;
}
else
{

    if (n == 1)
    {
        cout <<"Felicidades, usted ha ganado $55 dolares"<<endl;
    }
    else
    {
        if (n == 2)
        {
            cout <<"Felicidades, usted ha ganado $28 dolares"<<endl;
        }
        else
        {
            if (n == 3)
            {
                cout <<"Felicidades, usted ha ganado $150 dolares"<<endl;
            }
            else
            {
                if (n == 4)
                {
                    cout <<"Felicidades, usted ha ganado $10 dolares"<<endl;
                }
                else
                {
                    if (n == 5)
                    {
                        cout <<"Felicidades, usted ha ganado $80 dolares"<<endl;
                    }
                }
            }
        }

    }
 
return 0;                  
 
}