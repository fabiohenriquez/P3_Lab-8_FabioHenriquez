#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <fstream>

using namespace std;

class persona{

  public:
	string nombre;
	char genero;
    string color_piel;
    string color_ojos;
    string color_cabello;
    bool fertilidad;

	persona();
    persona(string,char,string,string,string,bool);

    
	string getNombre();
	void setNombre(string);

    char getGenero();
	void setGenero(char);

    string getColorOjos();
	void setColorOjos(string);

    string getColorPiel();
	void setColorPiel(string);

    string getColorCabello();
	void setColorCabello(string);

    bool getFertil();
    void setFertil(bool);

    persona operator+(persona&);
    persona operator*(persona&);


};


#endif
