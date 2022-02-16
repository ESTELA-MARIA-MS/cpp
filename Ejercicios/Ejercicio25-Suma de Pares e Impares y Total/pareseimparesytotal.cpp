#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
  

    for (int i = 1; i <= 10; i ++)
    {
        if (i % 2 == 0 ){
            pares = pares + i ;
            
        }
        
        {
            if (i % 2 > 0 ){ 
            impares +=  i ;
            }
            cout << i << " ";
        }    
    }    
    
     
    int suma = pares + impares;
      

    cout << endl;
    cout << endl;
    cout<<"los numeros pares son:"<< pares <<endl;
    cout << endl;
    cout<<"los numeros impares son:"<< impares <<endl;
    cout << endl;
    cout << "Total :" << suma;
    
   return 0;
}