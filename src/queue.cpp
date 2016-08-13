#include "queue.hpp"

using namespace std;

Queue::Queue(void){}


Queue::~Queue(void){}


void Queue::insert_inicio(Nodo* nodo){
  insert_final(nodo);
}

Nodo* Queue::extract_final(void){
  return extract_inicio();
}
