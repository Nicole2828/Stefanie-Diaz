#include <iostream>
using namespace std;

bool bisiesto (int a);

int main(){
   
cout<<"Ingrese un año: ";
int a;
cin>>a;

if(bisiesto(a))cout<<"El año es Bisiesto";
else cout <<"El año no es Bisiesto";
 
}

bool bisiesto(int a){
    if(a%4 != 0) return false;
    else if(a%100 != 0) return true;
    else if(a%400 != 0) return false;
    return true;
}