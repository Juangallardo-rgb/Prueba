/*
										UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
												   PLANTILLAS

				Autores: 				Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley Otuna
				Fecha de Creaci�n:		19/05/2021
				Fecha de modificacion:	19/05/2021
				Docente: 				Ing. Edgar Fernando Solis Acosta
				Carrera: 				Ingenieria de Software
				Asignatura:             Estructura de Datos
*/

#include <iostream>
#include "Operaciones.h"

using namespace std;

main(){
	Resta<int> dosnum(20,15);
	cout<<"El resultado es: "<<dosnum.Restar()<<endl;
	
	Suma<int> sumados(10,20);
	cout<<"El resultado es: "<<sumados.Sumar()<<endl;
	
	Multiplicacion<int> multi(5,8);
	cout<<"El resultado es: "<<multi.Multiplicar()<<endl;
	
	Division<float> divi(15,2);
	cout<<"El resultado es: "<<divi.Dividir()<<endl;
}