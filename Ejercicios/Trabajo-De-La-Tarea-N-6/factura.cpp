#include <iostream>

using namespace std;

double subtotal;
double impuesto = 0.15;
double total;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '/n';

    impuesto =precio*.15;

    subtotal = subtotal + (cantidad *precio);

    total =precio + impuesto;
} 

void imprimirFactura()
{
    system("cls");
    cout <<"*******" << endl;
    cout <<"FACTURA" << endl;
    cout <<"*******" << endl;
    cout << endl;

    cout <<"Productos:"<< endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal:"<< subtotal; 
    cout << endl;
    cout << "Impuesto a pagar:"<< impuesto; 
    cout << endl;
    cout << "Total:"<< total;
    cout << endl;
    cout << endl;
    system("pause");
} 
