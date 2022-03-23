#include <iostream>

using namespace std;

int main(int argc, char** argv[]) 
{
	
	int numero[5];
    // int indice = 3;
    //numeros[indice] = 50;
    //cout << numeros[indice] << endl;

    for(int i = 0; i < 5; i++)
    {
        numero[i] = i;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << numero[i] << endl;
    }

    
	return 0;
}