#include <stdio.h>
#include <conio.h>
using namespace std;

main() 
{
    int var, h;
    printf("Ingresa un numero:");
    scanf("%d", &var);
    h=var%2;

    /*Estructura Selectiva Doble if-else*/
    if (h==0)
    {
        printf("Par");
    }
    else
    {
        printf("Impar");
    }
    getch();
}

