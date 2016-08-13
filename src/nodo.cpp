#include "nodo.hpp"

using namespace std;

Nodo::Nodo(void):siguiente_(NULL){}

Nodo::Nodo(TDATO dato):siguiente_(NULL),dato_(dato){}


Nodo::Nodo(Nodo* siguiente, TDATO dato):siguiente_(siguiente),dato_(dato){}


Nodo::~Nodo(void){}


void Nodo::set_siguiente(Nodo* siguiente){
  siguiente_ = siguiente;
}


Nodo* Nodo::get_siguiente(void){
  return siguiente_;
}


void Nodo::set_dato(TDATO dato){
  dato_ = dato;
}


TDATO Nodo::get_dato(void){
  return dato_;
}
