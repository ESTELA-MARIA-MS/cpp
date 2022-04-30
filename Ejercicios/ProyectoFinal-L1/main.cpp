#include <iostream>
#include <string.h>

using namespace std;
 
struct medico
{
	string doctor, enfermedad;
};
 
struct domicilio
{
	string calle, colonia;
	int numero;
};
 
struct paciente
{
	string nombre, apep, apem, familiar;
	domicilio dom;
	medico med;

	
	
};
struct pasientedealta
{
	string alta, paciente, cons, ate;
	
};
 



int main()
{//Inicia main
	paciente pac[100];
	string buscar, buscardoc , consulta;
 
	int n,p=0,c=0,d=0,j,i,bee=0;

	do
	{
		cout<<"************************************************"<< endl;
		cout<<"BIENVENIDO AL SISTEMA DE ESTADISTICAS COVID-19"<< endl;
		cout<<"************************************************"<< endl;
		cout<<"Ingrese la opcion de su preferencia:"<<endl;
		cout<<"--------------------------------------------------------------"<<endl<<endl;
		cout<<"1.- Ingresar pacientes"<<endl;
		cout<<"2.- Mostrar pacientes"<<endl;
		cout<<"3.- Buscar paciente por su nombre"<<endl;
		cout<<"4.- Buscar pacientes de doctor especifico"<<endl;
		cout<<"5.- Dar de alta paciente"<<endl;
		cout<<"6.- Salir"<<endl;
		cin>>n;
		cout<<"****************************************************"<< endl;
	    cout<<"*****************************************************"<< endl;
		 
 
		system("cls");
		
		switch(n)
		{//Inicia switch
 
		  case 1:
		  	{
			
	            cout<<"-------------------------------------------------"<<endl<<endl;
	            cout<< "REGISTRO DE ESTADISTICA DE COVID-19"<<endl;
	            cout<<"-------------------------------------------------"<<endl<<endl;
 
		  		cout<<"Cuantos pacientes desea registrar?  ";
		  		cin>>p;
		  		
 
		  		for (i=0; i<p; i++)
		  		{//Inicia for pedir datos
		  		  
		  		 
		  		  cout<<"Ingrese los datos del paciente Numero "<<"["<<i+1<<"]: "<<endl;
		  		  
                  
		  		  cout<<"Nombre(s): ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].nombre);
 
		  		  cout<<"Apellido Paterno: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].apep);
 
		  		  cout<<"Apellido Materno: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].apem);
 
		  		  cout<<"Nombre del familiar responsable: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].familiar);
 
		  		  cout<<"Domicilio o Calle:"<<endl;
		  		  getline(cin,pac[i].dom.calle);
 
		  		  cout<<"Numero: ";
		  		  fflush(stdin);
		  		  cin>>pac[i].dom.numero;
 
		  		  cout<<"Colonia: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].dom.colonia);
 
		  		  cout<<"Nombre del Doctor: ";
		  		  fflush(stdin);
		  		  getline(cin,pac[i].med.doctor);
		  		  cout<<"Padecimiento: ";
		  		   fflush(stdin);
		  		  getline(cin,pac[i].med.enfermedad);
		  		  system("cls");
		  		  cout<<"----------------------------------------------"<<endl;
		  		  cout<<"----------------------------------------------"<<endl;
		  		 

               
				}//CIerra for para pedir datos

                  cout<<endl<<"Desea regresar al menu"<<endl;
		         cout<<"1.SI"<< endl;
		         cin>>n;
                 system("cls");
			}//termina case 1
			break;
			      
 
			case 2:
				{
					cout<<"----------------------------------------------------------"<<endl;
					cout<<"----------------------------------------------------------"<<endl;
					cout<<"Los pacientes ingresados en el hospital por COVID-19 son: "<<endl;
					if(p==0)
					{
						cout<<"Estadistica vacio... No hay pacientes registrados"<<endl;
						system("pause>null");
						system("cls");
					}				
					for(i=0; i<p; i++)
					{
 
						cout<<"----------------------------------------------"<<endl;
						cout<<"Paciente numero "<<"["<<i+1<<"]: "<<endl;
						cout<<"Nombre: "<<pac[i].nombre<<" "<<pac[i].apep<<" "<<pac[i].apem<<endl;
						cout<<"Familiar Responsable del paciente: "<<pac[i].familiar<<endl;
						cout<<"Domicilio, Numero, Colonia: "<<pac[i].dom.calle<<" #"<<pac[i].dom.numero<<" "<<pac[i].dom.colonia<<endl;
						cout<<"Doctor encargado: "<<pac[i].med.doctor<<endl;
						cout<<"Padecimiento: "<<pac[i].med.enfermedad<<endl;
						cout<<"----------------------------------------------"<<endl;
						cout<<"----------------------------------------------"<<endl;
		  		  

					}
					    cout<<endl<<"Desea regresar al menu"<<endl;
		                cout<<"1.SI"<< endl;
		                cin>>n;
                        system("cls");
				}//Termina case 2
				break;
 
			case 3:
				{
					cout<<"----------------------------------------------------------------"<<endl;
					cout<<"----------------------------------------------------------------"<<endl;
		           cout<<"Escriba el nombre del paciente que desea buscar (no apellidos): ";
		           fflush(stdin);
		           getline(cin,buscar);
		        
		           cout<<"Informacion del paciente solicitado: "<<endl;
		           
		          
 
		           for(i=0; i<p; i++)
		           {    
	               	    if(pac[i].nombre==buscar)
	             	    {
							cout<<"----------------------------------------------"<<endl;
							cout<<"Paciente numero "<<"["<<i+1<<"]: "<<endl;
							cout<<"Nombre: "<<pac[i].nombre<<" "<<pac[i].apep<<" "<<pac[i].apem<<endl;
							cout<<"Familiar Responsable del paciente: "<<pac[i].familiar<<endl;
							cout<<"Domicilio: "<<pac[i].dom.calle<<" #"<<pac[i].dom.numero<<" "<<pac[i].dom.colonia<<endl;
							cout<<"Doctor encargado: "<<pac[i].med.doctor<<endl;
							cout<<"Padecimiento: "<<pac[i].med.enfermedad<<endl;
							cout<<"----------------------------------------------"<<endl;
							cout<<endl<<endl;
                            c=1;
							
					   } 
                       if(c==0)
	               	       {
	               		    cout<<"Paciente no registrado..."<<endl;
	               		    system("pause>null");
					    	system("cls");
	               		   
						} 
					   	
							      
				   }  
						
				  cout<<"----------------------------------------------"<<endl;
		  		  cout<<"----------------------------------------------"<<endl;
                  cout<<endl<<"Desea regresar al menu"<<endl;
		          cout<<"1.SI"<< endl;
		          cin>>n;
                  system("cls");
		  		  
				}//Termina case 3
				break;
			case 4:
			{
					cout<<"--------------------------------------------------------------"<<endl;
					cout<<"--------------------------------------------------------------"<<endl;
		           cout<<"Escriba el nombre del doctor para saber que pacientes atiende: ";
		           fflush(stdin);
		           getline(cin,buscardoc);		        


		           cout<<"El doctor atiende a los siguientes pacientes: "<<endl<<endl;
		           
		           for(i=0; i<p; i++)
		           {	
	                	if (pac[i].med.doctor==buscardoc)
	                	{
					   	    cout<<"----------------------------------------------"<<endl;
							cout<<"Paciente numero "<<"["<<i+1<<"]: "<<endl;
							cout<<"Nombre: "<<pac[i].nombre<<" "<<pac[i].apep<<" "<<pac[i].apem<<endl;
							cout<<"Familiar Responsable del paciente: "<<pac[i].familiar<<endl;
							cout<<"Domicilio: "<<pac[i].dom.calle<<" "<<pac[i].dom.numero<<" "<<pac[i].dom.colonia<<endl;
							cout<<"Padecimiento: "<<pac[i].med.enfermedad<<endl;
							cout<<"----------------------------------------------"<<endl;
							cout<<endl<<endl;
                            d=1;
						} 	
							else{	
					   
					   if(d==0) {
	                   		cout<<"El doctor no tiene pacientes en este momento...";
	                   		system("pause>null");
						    system("cls");
		                	}
		                		
		             

                   }  }
		          cout<<endl<<"Desea regresar al menu"<<endl;
		          cout<<"1.SI"<< endl;
		          cin>>n;
                  system("cls");
	               
 
				  	
				}	 	
				break;
			
					    
		  		  		
			   //Termina case 4				
			   
			   
			case 5:{
				
					cout<<"--------------------------------------------------------"<<endl;
					cout<<"--------------------------------------------------------"<<endl;
	           	  
	           	   cout<<"Cuantos pacientes desea dar de alta?  ";
		  		   cin>>p;
		  		    for (i=0; i<p; i++)
		  		{
		  		    cout<<"Escriba el nombre del pacientes que quiere dar de alta: "<< endl;
		             fflush(stdin);
		  		    getline(cin,pac[i].nombre);
		  		   
		  		}
		            
                    for (i=0; i<p; i++) {
					
						cout<<"Paciente numero "<<"["<<i+1<<"]: "<<endl;
						cout<<"Nombre: "<<pac[i].nombre<<" "<<pac[i].apep<<" "<<pac[i].apem<<endl;
						cout<<"Doctor encargado: "<<pac[i].med.doctor<<endl;
						cout<<"----------------------------------------------"<<endl;
						cout<<"EL paciente fue dado  De Alta:"<<pac[i].nombre<<" "<<pac[i].apep<<" "<<pac[i].apem<<endl; 
						cout<<"----------------------------------------------"<<endl;
						cout<<"----------------------------------------------"<<endl;
 
					}
					if(bee==0)
	               	    {
	               		    cout<<"Paciente no registrados..."<<endl;
	               		   
					    }
		  		  cout<<"----------------------------------------------"<<endl;
		  		  cout<<"----------------------------------------------"<<endl;
                  cout<<endl<<"Desea regresar al menu"<<endl;
		          cout<<"1.SI"<< endl;
		          cin>>n;
                  system("cls");
				}//Termina case 5    
				break;
	
			default:
			  exit (0);
			  
		}//Cierra switch
		
	}while(n!=6);
 
 
}//Cierra main