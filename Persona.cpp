#include <iostream>

using namespace std ;

class Persona {
//Atributos
protected:
	
	string nombres,apellidos, direccion, fecha_de_nacimiento ;
	int telefono;
	
//constructores 
	Persona() {
		
	}
	Persona(string nom, string ape, string dir, string fn, int tel) {
	nombres =nom ;
	apellidos = ape ;
	direccion = dir ;
	fecha_de_nacimiento = fn ;
	telefono = tel ;
	
	}
// metodos (CRUD)	 
	void crear() ;
	void actualizar ();
	void leer () ;
	void borrar ();
	
};
