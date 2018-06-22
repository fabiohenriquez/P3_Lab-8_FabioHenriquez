#include "persona.h"
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;


int main(){
    vector<persona*> lista_personas;
    // 
    int opcion=0;
    int op=0;
    string nombre,c_ojos,c_cabello,c_piel;
    char fertil,genero;
    bool fer_2;
    char res ='s';
    do{
    cout<<"MENU"<<endl;
    cout<<"[1]. Administrar Personas"<<endl;
    cout<<"[2]  ver probabilidades "<<endl;
    cout<<"[3]  simulacion"<<endl;
    //cout<<"----"<<endl;
    cin>>opcion;
    switch(opcion){
        case 1:
            cout<<"[1]. Agregar Persona"<<endl;
            cout<<"[2]. Eliminar Persona"<<endl;
            cin>>op;
            switch(op){
                case 1:
                    cout<<"Ingrese el nombre"<<endl;
                    cin>>nombre;
                    cout<<"Ingrese el genero [m / h]"<<endl;
                    cin>>genero;
                    cout<<"Ingrese el color de ojos[azul,verde,cafe]"<<endl;
                    cin>>c_ojos;
                    cout<<"Ingrese el color de cabello[negro,rubio,cafe]"<<endl;
                    cin>>c_cabello;
                    cout<<"Ingrese el color de piel[blanco,moreno]"<<endl;
                    cin>>c_piel;
                    cout<<"Es fertil [s/n]"<<endl;
                    cin>>fertil;
                    if(fertil == 's' || fertil == 'S'){
                        fer_2 = true;
                    }else{
                        fer_2 = false;
                    }
                    lista_personas.push_back(new persona(nombre,genero,c_piel,c_ojos,c_cabello,fer_2));

                break;

                case 2:
                    int cc=0;
                    int cont=0;
                    
                    for(int i = 0; i < lista_personas.size(); i++){
                        cout<<cont<<", "<<lista_personas[i]->getNombre()<<", "<<lista_personas[i]->getColorOjos();
                        cont++;
                        cout<<endl;
                    }
                    cout<<endl;
                    cout<<"Ingrese la posicion de la persona que desea eliminar"<<endl;
                    cin>>cc;
                    if(cc<0 || cc>lista_personas.size()){
                        cout<<"Incorrecto, opcion fuera de rango"<<endl;
                        cin>>cc;
                    }else{
                        lista_personas.erase(lista_personas.begin()+cc);
                    }

                break;
                
            }//fin s2
        break;
        case 2:
            int c1=0;
            int c2=0;
            int op1=0;
            int op2=0;
            char opp = ' ';
            persona pp;
            cout<<"Bienvenido al las probabilidades"<<endl;
            cout<<endl;
            for(int i = 0; i < lista_personas.size(); i++){
                cout<<c1<<", "<<lista_personas[i]->getNombre()<<" | "<<lista_personas[i]->getColorOjos();
                c1++;
                cout<<endl;
            }
            cout<<"Ingrese la posicion de la primera persona"<<endl;
            cin>>op1;
            cout<<"Ingrese la posicion de la segunda persona"<<endl;
            cin>>op2;
            cout<<"Fue con proteccion [s/n]?"<<endl;
            cin>>opp;

            if(opp == 's' || opp == 'S'){
                pp = *lista_personas[op1] * *lista_personas[op2];  
                lista_personas.push_back(&pp);  
            }
            if(opp == 'n' || opp == 'N'){
                pp = *lista_personas[op1] + *lista_personas[op2]; 
                lista_personas.push_back(&pp);   
            }
    
        break;
    
    }//fin del s1
    cout<<"Desea continuar[s/n]"<<endl;
    }while(res=='S' || res=='s');


    return 0;
}