#include <iostream>

using namespace std;

int main() {
    int user_data, i, size = 0, total;
    int a[size];

    cout<<"De que tamano quieres tu arreglo: \n";
    cin>>size;

    for(i=0; i<=size; i++){
        cout<<"Ingresa un numero: \n";
        cin>>a[i];
    }
    cout<<"Numero multiplicar: \n";
    cin>>user_data;

    for(i=0; i<=size; i++){
        total = a[i] * user_data;
        cout<<"Total: "<<total <<endl;
    }
}
