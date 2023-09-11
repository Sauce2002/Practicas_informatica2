#include <iostream>
#include "problemas.h"

using namespace std;


int problema2(){

    //int valor;
    //cout <<"ingrese el dinero"<< endl;
    //cin >> valor;
    int cantidad;
    int billetes[6] = {50000, 20000, 10000, 5000, 2000, 1000};
    int monedas[4] = {500, 200, 100, 50};
    int cantidad_billetes[6] = {0};
    int cantidad_monedas[4] = {0};

    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    int resto = cantidad; //47810

    for (int i = 0; i < 6; i++) {
        cantidad_billetes[i] = resto / billetes[i];
        resto %= billetes[i];
    }

    for (int i = 0; i < 4; i++) {
        cantidad_monedas[i] = resto / monedas[i];
        resto %= monedas[i];
    }


    cout << "Combinación de billetes y monedas:" << endl;
        for (int i = 0; i < 6; i++) {
        if (cantidad_billetes[i] > 0) {
            cout << "$" << billetes[i] << " : " << cantidad_billetes[i] << " billetes" << endl;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (cantidad_monedas[i] > 0) {
            cout << "$" << monedas[i] << " : " << cantidad_monedas[i] << " monedas" << endl;
        }
    }

    cout << "Faltante: "<< resto <<endl;


    return 0;
}

int problema4(){
    int hora, duracion, hora_resultado, minuto_resultado;

    cout << "Ingrese la hora en formato de 24 horas(ejemplo > 1135): ";
    cin >> hora;

    //verificar la hora
    if (hora%100 >=60 || hora < 0 || hora > 2359) {
        cout << hora << " es un tiempo invalido." << endl;
        return 1;
    }

    cout << "Ingrese la duracion: ";
    cin >> duracion;

    //verificar la hora
    if (duracion%100 >=60 || duracion < 0 || duracion > 2359) {
        cout << duracion << " es un tiempo invalido." << endl;
        return 1;
    }

    hora_resultado = (hora + duracion)/100;
    minuto_resultado = (hora + duracion)%100;

    if (minuto_resultado >= 60) {
        hora_resultado += minuto_resultado / 60;
        minuto_resultado %= 60;
    }
    if (hora_resultado >= 24) {
        hora_resultado %= 24;
    }
    //operador ternario ?,:
    cout << "La hora es " << (hora_resultado < 10 ? "0" : "") << hora_resultado;
    cout << (minuto_resultado < 10 ? "0" : "") << minuto_resultado << endl;

    return 0;
}

int problema6(){

    float e;
    int N;
    cout<<"ingrese numero de elementos para aproximar:"<<endl;
    cin >>N;
    float factorial = 1;
    e=1;
    for(int i=1;i<N;i++){
        e+=1/(factorial*=i);
    }
    cout<<"e es aproximadamente: "<<e<<endl;
    return 0;
}

int problema8(){
    int a, b, c;
    int sumatoria = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    for (int i = 1; i < c; i++) {
        if (i % a == 0 || i % b == 0) {
            sumatoria += i;
        }
    }


    for (int i = 1; i < c; i++) {
        if (i % a == 0) {
            cout << i;
            if(i<c-1)cout<<" + ";
        }
    }
    for (int i = 1; i < c; i++){
        if (i % b == 0 && i % a != 0) {
            cout << i;
            if (i < c - 1) cout << " + ";
        }
    }
    cout << " = " << sumatoria << endl;
    return 0;
}

int problema10(){
    int n;
    bool primo(int num);
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int contador = 0;
    int numero = 2;
    while (contador < n) {

        if (primo(numero)) {
            contador++;
        }
        if (contador < n) {
            numero++;
        }

        }
    cout << "El primo numero " << n << " es: " << numero << endl;

    return 0;
}

bool primo(int num){

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int problema12(){

    return 0;
}
