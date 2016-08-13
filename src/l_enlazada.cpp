#include "l_enlazada.hpp"

using namespace std;

Lista::Lista(void):inicio_(NULL),final_(NULL){}


Lista::~Lista(void){
  Nodo* aux = inicio_;
  while(aux != NULL){
    inicio_ = inicio_ -> get_siguiente();
    delete aux;
    aux = inicio_;
  }
}

Nodo* Lista::top(void){
  return inicio_;
}


Nodo* Lista::get_final(void){
  return final_;
}


bool Lista::empty(void){
  if(inicio_ == NULL)
    return true;
  else
    return false;
}


void Lista::insert_empty(Nodo* nodo){
  inicio_ = nodo;
  final_ = nodo;
}


void Lista::insert_inicio(Nodo* nodo){
  if(empty())
    insert_empty(nodo);
  else {
    nodo -> set_siguiente(inicio_);
    inicio_ = nodo;
  }
}


void Lista::insert_final(Nodo* nodo){
  if(empty())
    insert_empty(nodo);
  else {
    final_ -> set_siguiente(nodo);
    final_ = nodo;
  }
}


Nodo* Lista::extract_inicio(void){
  if(inicio_ == final_){
    Nodo* aux = inicio_;
    inicio_ = NULL;
    final_ = NULL;
    return aux;

  } else {
    Nodo* aux = inicio_;
    inicio_ = inicio_ -> get_siguiente();
    return aux;
  }
}


Nodo* Lista::extract_final(void){
  if(inicio_ == final_){
    Nodo* aux = inicio_;
    inicio_ = NULL;
    final_ = NULL;
    return aux;

  } else {
    Nodo* aux = inicio_;
    while(aux -> get_siguiente() != final_)
      aux = aux -> get_siguiente();

    final_ = aux;
    aux = aux -> get_siguiente();
    final_ -> set_siguiente(NULL);
    return aux;
  }
}
