#include <iostream>
#include "factura.h"
#include "menu.h"
#include "producto.h"


using namespace std;

double subtotal;
double impuesto ;
double total;
string listaProductos;


void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion ;

    subtotal = subtotal + (cantidad *precio);
    
    impuesto =subtotal*.15;

    total = impuesto + subtotal;
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
