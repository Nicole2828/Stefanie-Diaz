#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<endl;
    cout<<"Determinar si un numero es positivo o negativo"<<endl<<endl;
    cout<<"Digite un numero ";
    cin>>n;
    
    if(n>= 0)
    {
        cout<<"El numero "<< n <<" es positivo"<<endl;
    }
    else 
    {
        cout<<"El numero "<< n <<" es negativo"<<endl;
    }
    cout<<endl;
}