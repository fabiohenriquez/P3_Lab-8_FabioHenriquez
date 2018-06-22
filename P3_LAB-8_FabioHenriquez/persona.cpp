#include "persona.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;
using std::string;


    persona::persona(){
        
    }

    persona::persona(string no,char gen, string piel,string ojos ,string cabello, bool fer){
        nombre = no;
        genero = gen;
        color_piel = piel;
        color_ojos = ojos;
        color_cabello = cabello;
        fertilidad = fer;
    }
    
    string persona::getNombre(){
        return nombre;
    }
	void persona::setNombre(string n){
        nombre = n;
    }

    char persona::getGenero(){
        return genero;
    }
	void persona::setGenero(char g ){
        genero = g;
    }

    string persona::getColorOjos(){
        return color_ojos;
    }
	void persona::setColorOjos(string co){
        color_ojos = co;
    }

    string persona::getColorPiel(){
        return color_piel;
    }

	void persona::setColorPiel(string c){
        color_cabello = c;
    }

    string persona::getColorCabello(){
        return color_cabello;
    }

	void persona::setColorCabello(string cc){
        color_cabello = cc;
    }

    bool persona::getFertil(){
        return fertilidad;
    }

    void persona::setFertil(bool fer){
        fertilidad = fer;
    }

    persona persona::operator+ (persona& rValue){
        int embarazo = 0;
        persona p;
        int po=0;
        srand(time(0));
        for(int k = 0;k<1;k++){
                embarazo = rand() % 1 + 5;
        }
       if(embarazo==1){// si hay un 20% de embarazo
                for(int h = 0;h<1;h++){
                   po = rand() % 1 + 2;
                }

                if(po == 1 &&  this->getFertil()==true && rValue.getFertil()==true ){//hombre o mujer
                 

                    if(this->getGenero() == 'h'){
                        p.setNombre(this->getNombre() + " -hijo ");
                        
                    }
                    if(rValue.getGenero() == 'h'){
                        p.setNombre(rValue.getNombre() + " -hijo ");
                        
                    }
                  
                    p.setGenero('h');
                    //////////////////////////////////////////////////////////////////////
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("azul");
                    }
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    //------------------------------------------------------------------------
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    //////////////////////////////////////////////////////////////////////
                    if(this->getColorCabello() == "negro" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("negro");
                    }
                    if(this->getColorCabello() == "cafe" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("cafe");
                    }
                    if(this->getColorCabello() == "cafe" && rValue.getColorCabello() =="rubio"){
                        p.setColorCabello("cafe");
                    }
                    if(this->getColorCabello() == "rubio" && rValue.getColorCabello() =="rubio"){
                        p.setColorCabello("rubio");
                    }
                    //-------------------------------------------------
                    if(this->getColorCabello() == "negro" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("negro");
                    }
                    
                    if(this->getColorCabello() == "rubio" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("cafe");
                    }
                    ////////////////////////////////////////////////////////////////////////
                    if(this->getColorPiel() == "moreno" && rValue.getColorPiel() =="blanco"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "moreno" && rValue.getColorPiel() =="moreno"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "blanco" && rValue.getColorPiel() =="moreno"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "blanco" && rValue.getColorPiel() =="blanco"){
                        p.setColorPiel("blanco");
                    }
                    /////////////////////////////////////////////////////////////////////////
                    return p;
                }else if(po == 2 && this->getFertil() && rValue.getFertil()){
                    if(this->getGenero() == 'm'){
                        p.setNombre(this->getNombre() + " -hija ");
                        cout<<"estoy aqui"<<endl;
                        cout<<this->getNombre();
                    }
                    if(rValue.getGenero() == 'm'){
                        p.setNombre(rValue.getNombre() + " -hija ");
                        cout<<"estoy aqui"<<endl;
                        cout<<this->getNombre();
                    }
                    p.setGenero('m');
                     //////////////////////////////////////////////////////////////////////
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("azul");
                    }
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    //------------------------------------------------------------------------
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    //////////////////////////////////////////////////////////////////////
                    if(this->getColorCabello() == "negro" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("negro");
                    }
                    if(this->getColorCabello() == "cafe" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("cafe");
                    }
                    if(this->getColorCabello() == "cafe" && rValue.getColorCabello() =="rubio"){
                        p.setColorCabello("cafe");
                    }
                    if(this->getColorCabello() == "rubio" && rValue.getColorCabello() =="rubio"){
                        p.setColorCabello("rubio");
                    }
                    //-------------------------------------------------
                    if(this->getColorCabello() == "negro" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("negro");
                    }
                    
                    if(this->getColorCabello() == "rubio" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("cafe");
                    }
                    ////////////////////////////////////////////////////////////////////////
                    if(this->getColorPiel() == "moreno" && rValue.getColorPiel() =="blanco"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "moreno" && rValue.getColorPiel() =="moreno"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "blanco" && rValue.getColorPiel() =="moreno"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "blanco" && rValue.getColorPiel() =="blanco"){
                        p.setColorPiel("blanco");
                    }
                    /////////////////////////////////////////////////////////////////////////
                    return p;
                }//2  
    }
    }

    persona persona::operator* (persona& rValue){
       int embarazo  = 0;
       int probabiliad = 0;
       int genero = 0;
       persona p;
       srand(time(0));
        for(int i = 0;i<1;i++){
            probabiliad = rand() % 100 + 1;
        }
        if(probabiliad == 1 ){ // si se rompe
            for(int k = 0;k<1;k++){
                embarazo = rand() % 1 + 5;
            }
            if(embarazo==1){// si hay un 20% de embarazo
                for(int h = 0;h<1;h++){
                   genero = rand() % 1 + 2;
                }
                if(genero = 1 && this->getFertil() && rValue.getFertil()){//hombre o mujer
                    if(this->getGenero() == 'h'){
                        p.setNombre(this->getNombre() + " -hijo ");
                    }
                    if(rValue.getGenero() == 'h'){
                        p.setNombre(rValue.getNombre() + " -hijo ");
                    }
                    p.setGenero('h');
                    //////////////////////////////////////////////////////////////////////
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("azul");
                    }
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    //------------------------------------------------------------------------
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    //////////////////////////////////////////////////////////////////////
                    if(this->getColorCabello() == "negro" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("negro");
                    }
                    if(this->getColorCabello() == "cafe" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("cafe");
                    }
                    if(this->getColorCabello() == "cafe" && rValue.getColorCabello() =="rubio"){
                        p.setColorCabello("cafe");
                    }
                    if(this->getColorCabello() == "rubio" && rValue.getColorCabello() =="rubio"){
                        p.setColorCabello("rubio");
                    }
                    //-------------------------------------------------
                    if(this->getColorCabello() == "negro" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("negro");
                    }
                    
                    if(this->getColorCabello() == "rubio" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("cafe");
                    }
                    ////////////////////////////////////////////////////////////////////////
                    if(this->getColorPiel() == "moreno" && rValue.getColorPiel() =="blanco"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "moreno" && rValue.getColorPiel() =="moreno"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "blanco" && rValue.getColorPiel() =="moreno"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "blanco" && rValue.getColorPiel() =="blanco"){
                        p.setColorPiel("blanco");
                    }
                    /////////////////////////////////////////////////////////////////////////
                    return p;
                }else if(genero = 2 && this->getFertil() && rValue.getFertil()){
                    if(this->getGenero() == 'm'){
                        p.setNombre(this->getNombre() + " -hija ");
                    }
                    if(rValue.getGenero() == 'm'){
                        p.setNombre(rValue.getNombre() + " -hija ");
                    }
                    p.setGenero('m');
                     //////////////////////////////////////////////////////////////////////
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="azul"){
                        p.setColorOjos("azul");
                    }
                    if(this->getColorOjos() == "cafe" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    //------------------------------------------------------------------------
                    if(this->getColorOjos() == "verde" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="verde"){
                        p.setColorOjos("verde");
                    }
                    if(this->getColorOjos() == "azul" && rValue.getColorOjos() =="cafe"){
                        p.setColorOjos("cafe");
                    }
                    //////////////////////////////////////////////////////////////////////
                    if(this->getColorCabello() == "negro" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("negro");
                    }
                    if(this->getColorCabello() == "cafe" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("cafe");
                    }
                    if(this->getColorCabello() == "cafe" && rValue.getColorCabello() =="rubio"){
                        p.setColorCabello("cafe");
                    }
                    if(this->getColorCabello() == "rubio" && rValue.getColorCabello() =="rubio"){
                        p.setColorCabello("rubio");
                    }
                    //-------------------------------------------------
                    if(this->getColorCabello() == "negro" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("negro");
                    }
                    
                    if(this->getColorCabello() == "rubio" && rValue.getColorCabello() =="cafe"){
                        p.setColorCabello("cafe");
                    }
                    ////////////////////////////////////////////////////////////////////////
                    if(this->getColorPiel() == "moreno" && rValue.getColorPiel() =="blanco"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "moreno" && rValue.getColorPiel() =="moreno"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "blanco" && rValue.getColorPiel() =="moreno"){
                        p.setColorPiel("moreno");
                    }
                    if(this->getColorPiel() == "blanco" && rValue.getColorPiel() =="blanco"){
                        p.setColorPiel("blanco");
                    }
                    return p;
                    /////////////////////////////////////////////////////////////////////////
                }//2  
            }//2
        }// 1

        }
        

