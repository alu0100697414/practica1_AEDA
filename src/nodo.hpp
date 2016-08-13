/* Clase nodo */
#pragma once

#include <iostream>
#include "dato.hpp"

using namespace std;

class Nodo {
private:

  Nodo* siguiente_;
  TDATO dato_;

public:

  Nodo(void);
  Nodo(TDATO dato);
  Nodo(Nodo* siguiente, TDATO dato);
  ~Nodo(void);

  void set_siguiente(Nodo* siguiente);
  Nodo* get_siguiente(void);

  void set_dato(TDATO dato);
  TDATO get_dato(void);
  
};
