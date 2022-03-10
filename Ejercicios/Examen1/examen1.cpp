#include <iostream>
using namespace std;

int Modulus(int iN, int iMod) {
	int iQ = (iN/iMod);
	return iN - (iQ*iMod);
}

char GetChar(int iGenerator, char cBase, int iRange) {
	return (cBase + Modulus(iGenerator, iRange));
}

int main() {
	string constrasena;
	
	string intento ;
	
	 
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	
	if (constrasena == "neo") {
		system("COLOR 02");

		char caRow[80];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;

		while (true) {
			int i = 0;
			
			// caracteres aleatorios
			while (i < 80) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 80)] = '-';
			caRow[Modulus(k, 80)] = ' ';
			caRow[Modulus(l, 80)] = '-';
			caRow[Modulus(m, 80)] = ' ';
			
			// incremente el valor de 3000000 para retrasar el proceso
			i = 0;
			while (i < 300000) {
				GetChar(1, 1, 1);
				 ++i;
			}
		}
	}
		if (constrasena == "smith") {
		system("COLOR 02");
		

		char caRow[80];
		int j = 7;
		int k = 2;
		int l = 5;
		int m = 1;

		while (true) {
			int i = 0;
			
			// caracteres aleatorios
			while (i < 80) {
				if (caRow[i] != ' ') {
					caRow[i] = GetChar(j + i*i, 33, 30);
				}
				std::cout << caRow[i];
				++i;
			}
			j = (j + 31);
			k = (k + 17);
			l = (l + 47);
			m = (m + 67);
			caRow[Modulus(j, 80)] = '-';
			caRow[Modulus(k, 80)] = ' ';
			caRow[Modulus(l, 80)] = '-';
			caRow[Modulus(m, 80)] = ' ';
			
			// incremente el valor de 3000000 para retrasar el proceso
			i = 0;
			while (i < 300000) {
				GetChar(1, 1, 1);
				 ++i;
				 
			}
		}
	}
	
	cout << endl;
while (true) {
	for (int i = 0; i< 10; i--) {
		system("cls");
	   	cout << "acceso a la matrix denegado"<< endl; 
		cout<< "Intento 1" << endl;
		system("pause");
		break;
		system("continue");	
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	
	for (int i = 0; i< 10; i--) {
		system("cls");
	   	cout << "acceso a la matrix denegado"<< endl; 
		cout<< "Intento 2" << endl;
		system("pause");
		
	break;
		system("continue");
		
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	
	for (int i = 0; i< 10; i--) {
		system("cls");
	   	cout << "acceso a la matrix denegado"<< endl; 
		cout<< "Intento 3" << endl;
		system("pause");
		
	break;
		system("continue");
		
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	for (int i = 0; i< 10; i--) {
		system("cls");
	   	cout << "acceso a la matrix denegado"<< endl; 
		cout<< "Intento 4" << endl;
		system("pause");
		
	break;
		system("continue");
		
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	for (int i = 0; i< 10; i--) {
		system("cls");
	   	cout << "acceso a la matrix denegado"<< endl; 
		cout<< "Intento 5" << endl;
		system("pause");
		
	break;
		system("continue");
		
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	for (int i = 0; i< 10; i--) {
		system("cls");
	   	cout << "acceso a la matrix denegado"<< endl; 
		cout<< "Intento 6" << endl;
		system("pause");
		
	break;
		system("continue");
		
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	for (int i = 0; i< 10; i--) {
		system("cls");
	   	cout << "acceso a la matrix denegado"<< endl; 
		cout<< "Intento 7" << endl;
		system("pause");
		
	break;
		system("continue");
		
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	for (int i = 0; i< 10; i--) {
		system("cls");
	   	cout << "acceso a la matrix denegado"<< endl; 
		cout<< "Intento 8" << endl;
		system("pause");
		
	break;
		system("continue");
		
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	for (int i = 0; i< 10; i--) {
		system("cls");
		cout<< "Intento 9" << endl;
	   	cout << "acceso a la matrix denegado"<< endl; 
		
		system("pause");
		
	break;
		system("continue");
		
	}
	cout << "Eres un agente? ingresa tu contraseña ";
	cin >> constrasena;
	
	
	for (int i = 0; i< 10; i--) {
		system("cls");
			neonstrasena == "neo")
		cout<< "Intento 10" << endl;
	   	cout << "acceso a la matrix denegado"<< endl; 
	cout << "El sistema Fallo"; 
	
	break;	
	
	
	}
	
	 return 0;    	
 }