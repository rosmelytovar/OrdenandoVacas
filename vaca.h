#ifndef VACA_H
#define VACA_H
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Vaca
{
	public:
        void setNombre(string v);
        string getNombre();
        void setRaza(string v);
        string getRaza();
        void setPeso(float v);
        float getPeso();
        void setLitrosDeLeche(float v);
        float getLitrosDeLeche();
        
        Vaca();
        
  private:
  	    string nombre;
  	    string raza;
  	    float peso;
  	    float litrosDeLeche; 
};

#endif
