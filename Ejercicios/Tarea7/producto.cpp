#include <iostream>
#include "producto.h"
#include "menu.h"
#include "factura.h"

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

 void productos (int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
     
        cout  << "BEBIDAS CALIENTES" << endl;
        cout  << "*****************" << endl;
        cout  << "1- Capuccino" << endl;
        cout  << "2- Expresso" << endl;
        cout  << endl;

        cout  << "Ingrese una opcion";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Capuccino - L 40.00", 1, 40);
            break;
         
        case 2:
            agregarProducto("1 Expresso - L30.00", 1, 30);
            break;
     
        default:
           {
              cout  << "opcion no validad";
              return; 
              break; 

            }
        } 
        cout  << endl;  
        cout  << " Producto agregado"<< endl << endl;
        system("pause");

        break;
    }
    case 2:
    {
        cout  << "BEBIDAS FRIAS" << endl;
        cout  << "*************" << endl;
        cout  << "1- Coca cola" << endl;
        cout  << "2- Pepsi" << endl;
        cout  << "3- Jugo de Naraja" << endl;
        cout  << endl;

        cout  << "Ingrese una opcion";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Caca cola - L60.00", 1, 60);
            break;
         
        case 2:
            agregarProducto("1 Pepsi - L 58.00", 1, 58);
            break;
        case 3:
            agregarProducto("1 Jugo de Naraja - L 10.00", 1, 10);
            break;    

          
        default:
            {
             cout  << "opcion no validad";
             return; 
             break; 

            }
     
        }
        cout  << endl;  
        cout  << " Producto agregado"<< endl << endl;
        system("pause");

        break;
    }
    case 3:
    {
        cout  << "REPOSTERIA" << endl;
        cout  << "**********" << endl;
        cout  << "1- Pastel de Frutas" << endl;
        cout  << "2- Donas" << endl;
        cout  << "3- Pastel de Pi�a" << endl;
        cout  << endl;

        cout  << "Ingrese una opcion";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Pastel de Frutas - L250.00", 1, 250);
            break;
         
        case 2:
            agregarProducto("1 Donas - L35.00", 1, 35);
            break;
        case 3:
            agregarProducto("1 Pastel de Pi�a - L10.00", 1, 10);
            break;    
        default:
        
           {
             cout  << "opcion no validad";
             return; 
             break; 
            }
     
        }
        cout  << endl;  
        cout  << " Producto agregado"<< endl << endl;
        system("pause");
        break;
    }  
} } 
