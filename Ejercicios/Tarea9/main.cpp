#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int input (int cant)
{
  if (cant == 1)
    {
      cout << "Presione \"ENTER\" para lanzar el dado 1";
    }
  else
    {
      cout << "Presione \"ENTER\" para lanzar el dado 2";
    }
    cin.ignore ();
}
int lanzardado ()
{
  int ran;
  srand (time (0));
  ran = rand () % 6 + 1;
  cout << "Obtuvo " << ran << endl;
  return ran;
}

int dado (int edado, int adado)
{
  cout << "Has avanzado " << edado + adado << " casillas" << endl;
  return edado + adado;
}

int main ()
{
	
  int total, dado1, dado2;

  input (1);
  dado1 = lanzardado ();
  input (2);
  dado2 = lanzardado ();
  total = dado(dado1, dado2);
  
  return 0;
}