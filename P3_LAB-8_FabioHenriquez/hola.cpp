#include "persona.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

 persona::persona(string no,char gen, string piel,string ojos ,string cabello, bool fer){
        nombre = no;
        genero = gen;
        color_piel = piel;
        color_ojos = ojos;
        color_cabello = cabello;
        fertilidad = fer;
    }
    