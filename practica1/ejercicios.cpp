#include <iostream>
#include "ejercicios.h"


using namespace std;

int ejercicio1(){

    int A,B;
    cout<<"ingrese numero 1:"<<endl;
    cin>>  A;
    cout<<"ingrese numero 2:"<<endl;
    cin>> B;

    if(B!=0){
        int c = A % B;
        cout<<"el residuo de la division es: "<< c <<endl;
    }
    else cout<<"error division por 0";

    return 0;
}

int ejercicio2(){
    int A;
    cout<<"ingrese numero para determinar paridad: "<<endl;
    cin >> A;
    if(A%2 ==0)cout<<"el numero "<<A<<"es par"<< endl;
    else cout<<"el numero "<< A<<" es impar"<<endl;
    return 0;
}

int ejercicio3(){
    int A,B;
    cout << "ingrese numero: "<<endl;
    cin >> A;
    cout << "ingrese numero: "<<endl;
    cin >> B;
    if(A>B)cout<<"el mayor es: "<<A<<endl;
    else cout<<"el mayor es: "<<B<<endl;
    return 0;
}

int ejercicio4(){
    int A,B;
    cout << "ingrese numero: "<<endl;
    cin >> A;
    cout << "ingrese numero: "<<endl;
    cin >> B;
    if(A<B)cout<<"el menor es: "<<A<<endl;
    else cout<<"el menor es: "<<B<<endl;

    return 0;
}

int ejercicio5(){
    float A,B,division;
    cout<<"ingrese primer numerador"<<endl;
    cin>>A;
    cout<<"ingrese segundo denominador"<<endl;
    cin>>B;

    if(B!=0){
        division=(A/B);
        int resultado;
        cout<<division<<endl;
        if (division >= 0) {
            resultado =(division + 0.5);
        } else {
            resultado =(division - 0.5);
        }
        cout<<"el resultado redondeado es "<< resultado <<endl;

    }
    else cout<<"error division por 0";

    return 0;
}

int ejercicio6(){
    int A,B,C;
    cout<<"ingrese base: "<<endl;
    cin>>A;
    cout<<"ingrese potencia: "<<endl;
    cin>>B;

    C = A;
    for(int i=1;i<B;i++){
        C = C*A;
    }
    cout<<"el resultado es: "<<C<<endl;

    return 0;
}

int ejercicio8(){

    int N;
    cout << "ingrese numero "<< endl;
    cin >> N;

    int factorial = 1;
    for(int i=1;i<=N;i++){
        factorial*=i;
    }
    cout << "el factorial de "<<N<<" es: "<<factorial;

    return 0;
}

int ejercicio10(){
    int N;
    cout<< "ingrese numero> "<<endl;
    cin>>N;
    cout<< "multiplos de "<<N<<"menores que 100:"<<endl;
    for(int i=1;i<=100;i++){
        if((N*i)<=100)cout<<(N*i)<<endl;
        else{i=101;}
    }
    return 0;
}

