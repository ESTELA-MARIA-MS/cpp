#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[]){
	
int a  [5];

     //Inicializar cada elemento del arreglo con valores random
     
     srand (time(NULL));
     
     for (int i=0; i<=5; i++)
	{
			
		a[i] = i *5;
	
    }
    for (int i=0; i<=5; i++)
	{
    
	cout << a[i] << endl; 
	
    }
    for (int i=0; i<=0; i++)
	{
		
	   cout <<"Total de la suma:" ,a[i] + a[5];  
    }
 	
	return 0;
}