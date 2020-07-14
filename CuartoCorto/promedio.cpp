#include <iostream>
using namespace std;

int main()
{
    int fil, col;
    float totalPromedio = 0.0f;
 
    cout << "\nNumero de alumnos: "; cin >> fil;
    cout << "Numero de calificaciones: "; cin >> col;
 
    float matriz[fil][col+1] = { 0.0f };
 
    for( int i = 0; i < fil; i ++ ){
        cout << "\nAlumno " <<  i + 1 <<  ":\n";
        for( int j = 0; j < col; j++ ){
            cout <<  "Calificacion " << j + 1 <<  ": ";
            cin >> matriz[i][j];
            matriz[i][col] += matriz[i][j];
            totalPromedio += matriz[i][j];
        }
        if(totalPromedio>=6)
    {
        cout<<"  APROBADO  "<<endl;
    }
    else
    {
    cout<<"  REPROBADO  "<<endl;
    }
    }
 
    for( int i = 0; i < fil; i ++ )
        cout << "\nAlumno " <<  i + 1 <<  ": "
             << "\nPromedio: " << matriz[i][col] / col;
 
     cout << "\nPromedio de la clase: " << totalPromedio / (fil * col ) << endl;
 
     return 0;
}