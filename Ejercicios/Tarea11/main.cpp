#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
 
using namespace std; 
   
int main()
{
    int N [5][5];
    int suma=0; 
   
     //Inicializar cada elemento del arreglo con valores random//
     
    srand (time(NULL));
    int random(); 
    
    for (int x = 0; x < 5; x++)
    
         for (int y = 0; y < 5; y++)
        {
         N [x][y] = random();
         suma= suma + N [x][y];
		}
     //Genera numero entre 1 and 25://
        for (int x = 0; x < 5; x++)
        {
         for (int y = 0; y < 5; y++)
        {
        	
        printf  ("%2d ",N [x][y]);
	
       }
        cout << endl;
    }
          
    // Salida//
    cout << endl;
    cout <<"Total de la suma es:" << suma;
  
  return 0;
}
    int random()
 {  
return rand()% 10 + 1;
 } 