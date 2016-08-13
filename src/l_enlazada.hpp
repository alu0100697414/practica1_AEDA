/* Clase lista enlazada */
#pragma once

#include <iostream>
#include "dato.hpp"
#include "nodo.hpp"

using namespace std;

class Lista {
private:

  Nodo* inicio_;
  Nodo* final_;

public:

  Lista(void);
  ~Lista(void);

  bool empty(void);

  Nodo* top(void);
  Nodo* get_final(void);

  void insert_empty(Nodo* nodo);
  void insert_inicio(Nodo* nodo);
  void insert_final(Nodo* nodo);

  Nodo* extract_inicio(void);
  Nodo* extract_final(void);

};
