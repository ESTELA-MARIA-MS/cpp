#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	// Datos de entrada
	int a = 10;
	int b = 12;
	int resultado;
	int c;
    int d;
    int e;
    int h;

    cout << endl;
	cout << "Ingrese el valor de a:";
	cin >> a;
	
	cout << endl; 
	cout << "Ingrese el valor de b:";
	cin >> b;
	
	// Proceso
    c = a + b;
    d = a - b;
    e = a * b;
    h = a / b;

    
    // Salida
    cout << endl;
    cout << " La suma de a + b es:" << c;
    cout << endl;
    cout << " La resta de a - b es:" << d;
    cout << endl;
    cout << " La multiplicacion de a * b es:" << e;
    cout << endl;
    cout << " La divicion de a / b es:" << h;
    
	return 0;
}