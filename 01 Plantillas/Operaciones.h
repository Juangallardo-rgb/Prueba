#include<iostream>

using namespace std;

//Suma
template <class TipoDato>
class Suma{
	TipoDato n1,n2;
public:
	Suma(TipoDato _n1, TipoDato _n2){
		n1 = _n1;
		n2 = _n2;
	};
	TipoDato Sumar();
};

template <class TipoDato>
TipoDato Suma<TipoDato>::Sumar(){
	return n1+n2;
}

//Resta
template <class TipoDato>
class Resta{
	TipoDato n3,n4;
public:
	Resta(TipoDato _n3, TipoDato _n4){
		n3 = _n3;
		n4 = _n4;
	};
	TipoDato Restar();
};

template <class TipoDato>
TipoDato Resta<TipoDato>::Restar(){
	return n3-n4;
}

//Multiplicacion
template <class TipoDato>
class Multiplicacion{
	TipoDato n5,n6;
public:
	Multiplicacion(TipoDato _n5, TipoDato _n6){
		n5 = _n5;
		n6 = _n6;
	};
	TipoDato Multiplicar();
};

template <class TipoDato>
TipoDato Multiplicacion<TipoDato>::Multiplicar(){
	return n5*n6;
}

//Division
template <class TipoDato>
class Division{
	TipoDato n7,n8;
public:
	Division(TipoDato _n7, TipoDato _n8){
		n7 = _n7;
		n8 = _n8;
	};
	TipoDato Dividir();
};

template <class TipoDato>
TipoDato Division<TipoDato>::Dividir(){
	return n7/n8;
}
