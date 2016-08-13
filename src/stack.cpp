#include "stack.hpp"

using namespace std;

Stack::Stack(void){}


Stack::~Stack(void){}

Nodo* Stack::get_final(void){
  return top();
}


void Stack::insert_final(Nodo* nodo){
  insert_inicio(nodo);
}

Nodo* Stack::extract_final(void){
  return extract_inicio();
}
