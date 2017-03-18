#include "vaca.h"
#include<conio.h>
#include<stdlib.h>
using namespace std;

Vaca::Vaca(){
}

 void Vaca::setNombre(string v){
	nombre=v;
}
 string Vaca::getNombre(){
 	return nombre;
 }
 void Vaca::setRaza(string v){
	raza=v;
}
string Vaca::getRaza(){
 	return raza;
}

 void Vaca::setPeso(float v){
 	peso=v;
 }
 float Vaca::getPeso(){
 	return peso;
 }
 void Vaca::setLitrosDeLeche(float v){
 	litrosDeLeche=v;
 }
 
 float Vaca::getLitrosDeLeche(){
 	return litrosDeLeche;
 }
 
