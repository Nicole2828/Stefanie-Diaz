#include <iostream>
using namespace std;

int main(){
    int nota[5],suma=0;
    float promedio;

    for(int i=0; i<5;i++){
        do{
            cout<<"Ingrese nota: "<<i+1<<endl;
            cin>>nota[i];

        }while(nota[i]<0 || nota[i]>10);
        
        suma=suma+nota[i];
    }
    promedio=suma/5;
    cout<<"El promedio es: "<<promedio<<endl;
    if(promedio>=6)
    {
        cout<<"  APROBADO  "<<endl;
    }
    else
    {
    cout<<"  REPROBADO  "<<endl;
    }
    

return 0;

}