#include "Persona.cpp"
#include <iostream>

using namespace std;
class Cliente : Persona{
	
	//Atributos
	private :
		string nit;
		
	//constructor
	public :
	
	cliente() {
		
	}
		Cliente (string nom, string ape, string dir, string fn, int tel, string n) : Persona(nom, ape,dir,fn,tel) {
		nit = n ;
		}
		
		//Metodos
		
		void leer () {
			cout<<"Nit: " <<nit<<endl ;
			cout<<"Nombres: " <<nombres<<endl ;
			cout<<"Apellidos: " <<apellidos<<endl ;
			cout<<"Direccion: " <<direccion <<endl ;
			cout<<"Telefono: " <<telefono <<endl ;
			cout<<"Fecha de nacimiento: " <<fecha_de_nacimiento <<endl ;
		}
	//
};
