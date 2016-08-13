/* Clase cola (queue) */
#pragma once

#include <iostream>
#include "dato.hpp"
#include "vector.hpp"
#include "l_enlazada.hpp"

class Queue : public Lista {
public:

  Queue(void);
  ~Queue(void);

  void insert_inicio(Nodo* nodo);

  Nodo* extract_final(void);

};
