#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include <stdio.h>
#include <iomanip>
#include "libgen.h"
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
				 case '2':
				 	system("cls");
           cout<<"\n ******************************** " <<endl;
           cout<<"\n *            Ordenar           * " <<endl;
           cout<<"\n * 1. Ordenar por Nombre.       * " <<endl;
           cout<<"\n * 2. Ordenar por Raza          * " <<endl;
           cout<<"\n * 3. Ordenar por Litros.       * " <<endl;
           cout<<"\n * 4. Ordenar por Peso.         * " <<endl;
		   cout<<"\n * Digite su Opcion:            * " <<endl;
		   cout<<"\n ******************************** " <<endl;
           cin>>opc;
           
            switch(opc)
		  {
		  		case '3':
			system("cls");
	            int k;
	            int l;
                   for (k = 0; k < acomulador; k++) {
		               for (l = 0; l<= acomulador-2; l++) {
			              if (Mariposa[l].getLitrosDeLeche()>Mariposa[l+1].getLitrosDeLeche()){
			                 Vaca aux = Mariposa[l];
				             Mariposa[l] = Mariposa[l+1];
				             Mariposa[l+1] = aux;
			                }
		                }	
	                }   
            break;		
	 
			case '4':
			system("cls");
	            int i;
	            int j;
                   for (i = 0; i < acomulador; i++) {
		               for (j = 0; j <= acomulador-2; j++) {
			              if (Mariposa[j].getPeso()>Mariposa[j+1].getPeso()){
			                 Vaca aux = Mariposa[j];
				             Mariposa[j] = Mariposa[j+1];
				             Mariposa[j+1] = aux;
			                }
		                }	
	                }   
            break;		
	 
}
                
