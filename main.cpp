#include <iostream>
#include <math.h>
using namespace std;
string numero="Inserte el enesimo numero: ";
string result="La suma de los ";
string result2=" primeros numeros ";
string result3=" es: ";

void menu() {

}

void sumanumeronatural() {
    int x,n;
    cout << numero ;
    cin >> n;
    for(int x=1;x<=n;x+=1){
        cout << x << ": " << x << endl;
    };
    cout << result << n << result2 << "naturales" << result3 << (n*(n+1))/2 << endl;
}
void sumanumerospares() {
    int x,n;
    cout << numero ;
    cin >> n;
    for(int x=1;x<=n;x+=1){
        cout << x << ": " << x*2 << endl;
    };
    cout << result << n << result2 << "naturales pares" << result3 << n*(n+1) << endl;
}
void sumanumerosimpares() {
    int x,n;
    cout << numero;
    cin >> n;
    for(int x=1;x<=n;x+=1){
        cout << x << ": " << 2*x-1 << endl;
    };
    cout << result << n << result2 << "naturales impares" << result3 << pow(n,2) << endl;
}
void sumacuadrados() {
    int x,n;
    cout << numero;
    cin >> n;
    for(int x=1;x<=n;x+=1){
        cout << x << ": " << pow(x,2) << endl;
    };
    cout << result << n << result2 << "cuadrados perfectos" << result3 << (n*(n+1)*(2*n+1))/6 << endl;
}
void sumacubos() {
    int x,n;
    cout << numero;
    cin >> n;
    for(int x=1;x<=n;x+=1){
        cout << x << ": " << pow(x,3) << endl;
    };
    cout << result << n << result2 << "cubos perfectos" << result3 << pow((n*(n+1))/2,2) << endl;
}
void sumaproductostomadosdedos() {
    int x,n;
    cout << numero;
    cin >> n;
    for(int x=1;x<=n;x+=1){
        cout << x << ": " << x << "*" << x+1 << endl;
    };
    cout << result << n << result2 << "productos consecutivos tomados de dos en dos";
    cout << result3 << (n*(n+1)*(n+2))/3 << endl;
}
void sumaproductostomadosdetres() {
    int x,n;
    cout << numero;
    cin >> n;
    for(int x=1;x<=n;x+=1){
        cout << x << ": " << x << "*" << x+1 << "*" << x+2 << endl;
    };
    cout << result << n << result2 << "productos consecutivos tomados de tres en tres";
    cout << result3 << (n*(n+1)*(n+2)*(n+3))/4 << endl;
}
int main() {
    int opcion = 0;
    cout << "Elija una opcion";
    cout << "\n";
    cout << "1: Suma de n primeros numeros naturales";
    cout << "\n";
    cout << "2: Suma de n primeros numeros pares naturales";
    cout << "\n";
    cout << "3: Suma de n primeros numeros impares naturales";
    cout << "\n";
    cout << "4: Suma de n primeros numeros cuadrados perfectos";
    cout << "\n";
    cout << "5: Suma de n primeros numeros cubos perfectos";
    cout << "\n";
    cout << "6: Suma de n primeros numeros naturales consecutivos tomados de 2 en 2";
    cout << "\n";
    cout << "7: Suma de n primeros numeros naturales consecutivos tomados de 3 en 3";
    cout << "\n";
    cout << "Ingrese una opcion: ";
    cin >> opcion;
    switch (opcion) {
        case 1: sumanumeronatural();
        break;
        case 2: sumanumerospares();
        break;
        case 3: sumanumerosimpares();
        break;
        case 4: sumacuadrados();
        break;
        case 5: sumacubos();
        break;
        case 6: sumaproductostomadosdedos();
        break;
        case 7: sumaproductostomadosdetres();
        break;
        default: cout << "Opciòn Incorrecta";

    }
    return 0;
}
