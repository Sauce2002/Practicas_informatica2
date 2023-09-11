#include <iostream>
#include "ejercicios.h"
#include "problemas.h"
using namespace std;

int main()
{
    cout << "practica1" << endl;
    //ejercicio1();
    int opcion;

    cout << "ingrese el numeral del problema (solo pares): "<<endl;
    cin>>opcion;
    switch (opcion) {
    case 2:
        problema2();
    case 4:
        problema4();
    case 6:
        problema6();
    case 8:
        problema8();
    case 10:
        problema10();
    case 12:
        problema12();
    case 14:
        problema14();
    case 16:
        problema16();

    default:
        break;
    }

    return 0;
}
