#include <iostream>
using namespace std;
int sumaRecursiva(int n) {
    if(n==0) {
        return 0;
    }else{
        return n + sumaRecursiva(n-1);
    }
}
int main() {
    int n;
    cout<<"Ingrese un numero entero positivo para calcular la suma de los primeros n numeros naturales:";
    cin >> n;
    if (n <0){
        cout <<"El numeros ingresado no es valido. Debe ser un numero entero positivo." << endl;
        return 1;
    }
    int resultado=sumaRecursiva(n);
    cout << "La suma de los primeros" <<n<< "numeros naturales es:"<< resultado<< endl;
    return 0;
}