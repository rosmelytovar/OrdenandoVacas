#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include <stdio.h>
#include"vaca.h"
#include"Ancho.h"

using namespace std;
char opc;
int main (int argc,char**argv){
	Vaca Mariposa [ANCHO];
    string nombre; // nombre de la variable vaca
    string raza; // variable raza
    float peso; // variable peso
    float litros=0; // variable litros
    int acomulador=0;
    
    
         system("cls");

		   do{
           cout<<"\n ******************************** " <<endl;
           cout<<"\n *            MENU              * " <<endl;
           cout<<"\n * 1. Agregar las Vacas.        * " <<endl;
           cout<<"\n * 2. Ver lista de las vacas.   * " <<endl;
           cout<<"\n * 3. Salir.                    * " <<endl;
           cout<<"\n *    Digite su Opcion:         * " <<endl;
           cout<<"\n ******************************** " <<endl;
           cin>>opc;
           
           
            switch(opc)
		  {
			 case '1':
               system("cls");
					do{
						 cout<<"Ingrese el nombre de la Vaca:\n";
						 cin>>nombre;
                         Mariposa[acomulador].setNombre(nombre);
                         cout<<"Ingrese la raza: \n";
                         cin>>raza;
                         Mariposa[acomulador].setRaza(raza);
                         cout<<"Ingrese los Litros:";
                         cin>>litros; 
                         Mariposa[acomulador].setLitrosDeLeche(litros);
                         cout<<"Ingrse el Peso: ";
                         cin>>peso;
                         Mariposa[acomulador].setPeso(peso);
                         acomulador++;
                         system("cls");
						  
				 break;
