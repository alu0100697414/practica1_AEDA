/* Clase pila (stack) */
#pragma once

#include <iostream>
#include "dato.hpp"
#include "vector.hpp"
#include "l_enlazada.hpp"

class Stack : public Lista {
public:

  Stack(void);
  ~Stack(void);

  Nodo* get_final(void);

  void insert_final(Nodo* nodo);

  Nodo* extract_final(void);

};
