#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char** argv) {
	
	double dato, raiz;
    
    cout << "Ingrese un numero para obtener su raiz cuadrada:";
	cin >> dato;
    
    raiz = sqrt(dato);
    
    cout << "La raiz cuadrada de " << dato << " es: " << raiz << endl;
    
	return 0;
}